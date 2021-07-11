class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int ans = 0;
        
        for(int i = n-2; i >= 0; i -= 2)
        {
            ans += nums[i];
        }
        
        return ans;
    }
};