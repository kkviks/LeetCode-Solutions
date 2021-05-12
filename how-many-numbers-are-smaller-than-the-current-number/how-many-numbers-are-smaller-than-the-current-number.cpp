class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp(102,0);
        
        for(int x:nums){
            temp[x+1]++;
        }
        
        partial_sum(temp.begin(),temp.end(),temp.begin());
        
        vector<int> ans(nums.size());
        
        for(int i=0;i<nums.size();i++){
            ans[i] = temp[nums[i]];
        }
        
        return ans;
    }
};