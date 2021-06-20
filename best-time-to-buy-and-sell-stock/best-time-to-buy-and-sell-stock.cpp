class Solution {
public:
    int maxProfit(vector<int>& a) {
        int max_profit = 0;
        int curr_min = a[0];
        
        for(int i=0;i<a.size();i++){
            curr_min = min(curr_min, a[i]);
            max_profit = max(max_profit,a[i]-curr_min);
        }
        
        return max_profit;
    }
};