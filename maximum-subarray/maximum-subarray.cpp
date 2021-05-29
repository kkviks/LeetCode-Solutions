class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = 0, max_neg_num=INT_MIN;
        bool allNeg = true;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if(sum<0)sum = 0;
            if(nums[i]>=0)allNeg = false;
            max_neg_num = max(max_neg_num,nums[i]);
            maxSum = max(maxSum,sum);
        }
        if(allNeg)return max_neg_num;
        return maxSum;
    }
};