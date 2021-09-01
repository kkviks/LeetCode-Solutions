class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        int dp[n];
        
        dp[0] = a[0];
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1]+a[i], a[i]);
        }
        
        int ans = INT_MIN;
        for(int i=0;i<n;i++){
            ans = max(ans, dp[i]);
        }
        
        return ans;
    }
};