class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        bool allNeg = true;
        int max_neg = INT_MIN;
        
        int sum = 0;
        
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum<0)
                sum = 0;
            max_sum = max(max_sum,sum);
            if(nums[i]>=0)
                allNeg=false;
            else
                max_neg = max(max_neg, nums[i]);
        }
        
        if(allNeg)
            return max_neg;
        
        return max_sum;
    }
};