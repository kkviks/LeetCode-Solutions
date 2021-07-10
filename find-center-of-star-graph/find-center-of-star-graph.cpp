class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        unordered_map<int,int> indegree;
        int n = edges.size();
        
        for(vector<int> &v:edges)
        {
            indegree[v[0]]++;
            indegree[v[1]]++;
            
            if(indegree[v[0]]==n)
                return v[0];
            else if(indegree[v[1]]==n)
                return v[1];
        }
        
        return -1;
    }
};