class Solution {
public:
    int specialArray(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        for(int x=0; x<=1000; x++)
        {
            int idx = lower_bound(nums.begin(), nums.end(),x)-nums.begin();
            int cnt = nums.size()-1  - idx + 1;
            if(cnt==x)
            {
                return x;
            }
        }
        
        return -1;
    }
};