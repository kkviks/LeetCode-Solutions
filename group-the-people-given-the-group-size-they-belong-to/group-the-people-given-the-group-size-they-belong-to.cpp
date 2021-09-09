class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> m;
        
        for(int i=0;i<groupSizes.size();i++){
            
            int x = groupSizes[i];
            m[x].push_back(i);
            
            if(m[x].size()==x){
                ans.push_back(m[x]);
                m.erase(x);
            }
        }
        
        return ans;
    }
};