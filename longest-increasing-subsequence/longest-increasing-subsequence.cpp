class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        vector<int> dp(n,INT_MAX);
        int i=0,j=1;
        dp[i] = a[0];
        int ans = 1;
        while(j<a.size()){
            i = lower_bound(dp.begin(),dp.end(), a[j])-dp.begin();
            dp[i] = a[j];
            ans = max(ans, i+1);
            j++;
        }
        
        return ans;
    }
};

// [10,9,2,5,3,7,101,18]
// [2,3,7,101,]