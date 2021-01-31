class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long highest = LONG_MIN;
        long secondHighest = LONG_MIN;
        long thirdHighest = LONG_MIN;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>highest){
                thirdHighest = secondHighest;
                secondHighest = highest;
                highest = nums[i];
            }else if(nums[i]>secondHighest and nums[i]!=highest ){
                thirdHighest = secondHighest;
                secondHighest = nums[i];
            }else if(nums[i]>=thirdHighest and nums[i]!=secondHighest and nums[i]!=highest){
                thirdHighest = nums[i];
            }
        }
        
        if(thirdHighest!=LONG_MIN){
            return thirdHighest;
        }
        return highest;
    }
};
