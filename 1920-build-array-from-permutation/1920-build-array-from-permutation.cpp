class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int mask = (1<<10) - 1;
        for(int i=0;i<nums.size();i++){
            int want = nums[nums[i]] & mask;
            want = want << 10;
            nums[i] = want | nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i] >> 10;
        }
        return nums;
    }
};