class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        int dp[n][2];
        
        dp[0][0] = max(0,a[0]);
        dp[0][1] = min(0,a[0]);
        
        if(n==1)return a[0];
        
        int ans = dp[0][0];
        
        for(int i=1;i<n;i++){
            if(a[i]>=0){
                dp[i][0] = max(a[i],dp[i-1][0]*a[i]);
                dp[i][1] = a[i]*dp[i-1][1];
        
            }else if(a[i]<0){
                dp[i][0] = a[i]*dp[i-1][1];
                dp[i][1] = min(a[i],a[i]*dp[i-1][0]);
            }
            ans = max(ans,dp[i][0]);
        }

        return ans;
    }
};