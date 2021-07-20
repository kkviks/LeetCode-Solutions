class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,unordered_set<int>> m;
        
        for(int i=0;i<strs.size();i++)
        {
            string s = strs[i];
            sort(s.begin(), s.end());
            m[s].insert(i);
        }
        
        vector<vector<string>> ans;
        
        for(auto p:m)
        {
            vector<string> temp;
            for(auto idx:p.second)
            {
                temp.push_back(strs[idx]);
            }
            ans.push_back(temp);
        }
        
        return ans;
    }
};