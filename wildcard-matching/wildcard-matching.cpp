class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(), m=p.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        vector<bool> cache(m+1,false);
        int i = m-1;
        while(i>=0 and p[i]=='*')
            cache[i--] = true;
        return f(0,0,n,m,s,p,dp,cache);
    }
    
    bool f(int i, int j, int n, int m, string s, string p, vector<vector<int>> &dp, vector<bool> &cache){
        if(i==n and j==m)return true;
        if(i==n and j<m)return cache[j];
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        bool ans = false;
        if(p[j]=='?') ans = f(i+1,j+1,n,m,s,p,dp,cache);
        else if(p[j]=='*') ans = f(i,j+1,n,m,s,p,dp,cache) or f(i+1,j,n,m,s,p,dp,cache);
        else ans = s[i]==p[j] and f(i+1,j+1,n,m,s,p,dp,cache);
        
        return dp[i][j]=!!ans;
    }
};