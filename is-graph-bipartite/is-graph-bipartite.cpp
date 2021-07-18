class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        bool ans = true;
        
        vector<int> visited(graph.size(), -1);
        
        for(int i=0;i< graph.size() and ans ;i++)
        {
            if(visited[i]==-1)
                ans &= dfs(i,graph,visited, 0);
        }
        
        return ans;        
    }
    
    bool dfs(int src, vector<vector<int>> &graph, vector<int> &visited, int color)
    {
        visited[src] = color;
        
        for(int &child:graph[src])
        {
            if(visited[child]==-1)
            {
                bool isBipartite = dfs(child,graph,visited,1-color);
                if(isBipartite==false)
                    return false;
            }else if(visited[child]==color)
                return false;
            else 
                continue;
        }
        return true;
    }
};