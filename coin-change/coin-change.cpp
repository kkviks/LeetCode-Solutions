class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        
        int dp[n+1];
        fill(dp,dp+n+1,-1);
        
        int ans = coinChange(coins,n,dp);
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
    
    int coinChange(vector<int>& coins, int n, int dp[])
    {
        if(n<0)return INT_MAX;
        if(n==0)return 0;
        
        if(dp[n]!=-1)return dp[n];
        
        int ans = INT_MAX;
        
        for(int coin:coins)
        {
            ans = min(ans, coinChange(coins,n-coin,dp));
        }
        
        if(ans==INT_MAX)
        {
            return dp[n]=ans;
        }
        
        return dp[n]=1+ans;
    }
};