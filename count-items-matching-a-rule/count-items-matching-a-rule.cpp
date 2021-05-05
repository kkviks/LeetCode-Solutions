class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count = 0, idx = -1;
        
        if(ruleKey=="type")idx = 0;
        else if(ruleKey == "color")idx = 1;
        else idx = 2;
        
        for(auto v:items){
            count += ruleValue == v[idx];
        }
        return count;
    }
};