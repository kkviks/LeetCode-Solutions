class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        unordered_set<int> set(nums.begin(), nums.end());
        
        int N = 5*1e5;
        
        for(int i=1;i<=N;i++)
        {
            if(set.count(i)==0)
                return i;
        }
        
        return N+1;
    }
};