class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set<int> set(nums.begin(), nums.end());
        
        for(int i=1;i<=500006;++i)
        {
            if(set.count(i)==0)
                return i;
        }
        
        return -1;
        
    }
};