class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = INT_MIN;
        for(auto &customer: accounts){
            int sum = 0;
            for(auto &money: customer)
                sum += money;
            res = max(res, sum);
        }
        return res;
    }
};