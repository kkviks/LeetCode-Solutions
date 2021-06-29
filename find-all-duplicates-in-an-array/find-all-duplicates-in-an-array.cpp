class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> lookup(nums.size()+1, 0);
        vector<int> ans;
        ans.reserve(nums.size());
        
        for(int num: nums)
        {
            lookup[num]++;
        }
        
        for(int i=0;i<lookup.size(); i++)
        {
            if(lookup[i]==2)
            {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};