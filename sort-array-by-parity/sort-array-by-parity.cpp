class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> ans(nums.size());
        
        int e = 0, o = nums.size()-1;
        
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                ans[e++] = nums[i];
            else
                ans[o--] = nums[i];
        }
        
        return ans;
    }
};