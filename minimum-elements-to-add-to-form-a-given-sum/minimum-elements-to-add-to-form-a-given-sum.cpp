class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        
        long sum = 0;
        for(int num:nums){
            sum += num;
        }
        
        long diff = max(1L*goal,sum) - min(1L*goal,sum);
        int count = ceil(diff*1.0/limit);
        
        return count;
    }
};