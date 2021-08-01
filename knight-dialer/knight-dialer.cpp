class Solution {
private:
    unordered_map<int,vector<int>> m;
    const int mod = 1e9+7;
    long long count = 0;
    int dp[10][5001];
public:
    int knightDialer(int n) {
        m[0] = {4,6};
        m[1] = {6,8};
        m[2] = {7,9};
        m[3] = {4,8};
        m[4] = {3,9,0};
        m[5] = {};
        m[6] = {1,7,0};
        m[7] = {2,6};
        m[8] = {1,3};
        m[9] = {4,2};
        
        memset(dp,-1,sizeof dp);
        
        for(int i=0;i<=9;i++){
            count += dfs(i,n-1);
            count %= mod;
        }
        
        return (int)count;
    }
    
    int dfs(int src,int n){
        if(n==0){
            return 1;
        }
        
        if(dp[src][n]!=-1){
            return dp[src][n];
        }
        
        long long int ans = 0;
        for(int nbr:m[src]){
            ans += dfs(nbr,n-1);
            ans %= mod;
        }
        
        return dp[src][n] = ans;
    }
};