class Solution {
public:
    int findCircleNum(vector<vector<int>>& l) {
        
        int count = 0;
        int n = l.size();
        
        vector<bool> visited(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                count++;
                dfs(i,l,visited);
            }
        }
        
        return count;        
    }
    
    void dfs(int src,vector<vector<int>> &l, vector<bool> &visited)
    {
        visited[src] = true;
        
        for(int i=0;i<l.size();i++){
            if(l[src][i]==1 and visited[i]==false)
                dfs(i,l,visited);
        }
    }
};