class Solution {
public:
    int jump(vector<int>& a) {
        //o(n^2);
        int n = a.size();
        int dp[n];
        dp[0]=0;
        for(int i=1;i<n;i++){
            dp[i] = INT_MAX;
            for(int j=0;j<i;j++){
                if(a[j]>=i-j and dp[j]!=INT_MAX){
                    dp[i] = min(dp[i],1+dp[j]);
                }
            }
           // cout << dp[i] << " ";
        }
        return dp[n-1];
    }
};