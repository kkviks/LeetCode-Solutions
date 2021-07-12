class Solution {
private:
    unordered_map<int,vector<int>> m;
public:
    Solution(vector<int>& nums) {
        
        for(int i = 0;i<nums.size();i++)
        {
            m[nums[i]].push_back(i);
        }
        
    }
    
    int pick(int target) {
        
        int sz = m[target].size();
        int idx = rand()%sz;
        
        return m[target][idx];        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */