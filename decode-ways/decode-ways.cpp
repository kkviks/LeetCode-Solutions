class Solution {
public:
    int numDecodings(string s) {
        
        int n = s.size();
        vector<int> dp(n+1,0);
        
        if(s[0]=='0')return 0;
        
        dp[0] = 1;
        dp[1] = 1;
        
        for(int i=2;i<=n;i++)
        {
            int curr = s[i-1]-'0', prev = s[i-2]-'0';
            if(curr!=0)
                dp[i] = dp[i-1];
            if(prev==1 or (prev==2 and curr<=6))
                dp[i] += dp[i-2];
        }
        
        return dp[n];
    }
};