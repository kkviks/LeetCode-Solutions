class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n==1)return nums[0];
        
        int case1 = rob_helper(0,n-2,nums);
        int case2 = rob_helper(1,n-1,nums);
        
        return max(case1,case2);
    }
    
    int rob_helper(int s, int e, vector<int> &nums){
        int n = e-s+1;
        if(n==1){
            return nums[s];
        }
        
        int dp[n];
        dp[0] = nums[0+s];
        dp[1] = max(dp[0],nums[1+s]);
        
        for(int i=2;i<n;i++){
            int val = nums[i+s];
            dp[i] = max(dp[i-1],dp[i-2]+val);
        }
 
        return max(dp[n-1],dp[n-2]);
    }

};