class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int rabbit = 0, turtle = 0;
        while(rabbit < nums.size()){
            if(nums[rabbit]!=val){
                swap(nums[rabbit], nums[turtle++]);
            }
            ++rabbit;
        }
        return turtle;
    }
};