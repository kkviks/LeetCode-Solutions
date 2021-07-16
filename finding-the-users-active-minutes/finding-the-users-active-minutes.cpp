class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        
        unordered_map<int, unordered_set<int>> m;
        
        for(auto log:logs)
        {
            int id = log[0];
            int time = log[1];
            
            m[id].insert(time);
        }
        
        vector<int> ans(k);
        
        for(auto p:m)
        {
            int sz = p.second.size();
            ans[sz-1]++;
        }
        
        return ans;
        
    }
};


/*

0 - 5,2
1 - 2,3



*/