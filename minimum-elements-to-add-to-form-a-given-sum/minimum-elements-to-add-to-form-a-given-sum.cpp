class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        
        long sum = 0;
        for(int num:nums){
            sum += num;
        }
        
        long diff = abs(sum-goal);
        int count = (diff+limit-1)/limit;
        
        return count;
    }
};