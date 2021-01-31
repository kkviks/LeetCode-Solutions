class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(begin(nums),end(nums),greater<int>());
        int g_max = nums[0];
        int count = 1;
        int curr = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]==curr)continue;
            count++; curr = nums[i];
            if(count == 3)return curr;
        }
        
        return g_max;
    }
};