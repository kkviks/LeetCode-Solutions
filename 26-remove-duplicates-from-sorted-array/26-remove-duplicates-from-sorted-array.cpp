class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fill = 0, move = 0;
        while(move < nums.size()){
            if(nums[move]!=nums[fill]){
                nums[++fill] = nums[move];
            }
            ++move;
        }
        return fill+1;
    }
};