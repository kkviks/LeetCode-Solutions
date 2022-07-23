class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int value = 0;
        for(auto &op: operations){
            op[1]=='+'?++value:--value;
        }
        return value;
    }
};