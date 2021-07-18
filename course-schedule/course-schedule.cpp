class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        
        vector<vector<int>> graph = make_graph(p,n);
        vector<bool> visited(n,false), currStack(n,false);
        
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                bool hasCycle = dfs(i,graph,visited,currStack);
                if(hasCycle)
                    return false;
            }
        }
        
        return true;
    }
    
    bool dfs(int src, vector<vector<int>> &l,vector<bool> &visited,vector<bool> &currStack)
    {
        visited[src] = true;
        currStack[src] = true;
        
        for(int child:l[src])
        {
            if(visited[child]==false)
            {
                bool hasCycle = dfs(child,l,visited,currStack);
                if(hasCycle)
                    return true;
            }else if(visited[child]==true and currStack[child]==true)
                return true;
        }
        
        currStack[src] = false;
        return false;
    }
    
    vector<vector<int>> make_graph(vector<vector<int>> &p,int n)
    {
        vector<vector<int>> l(n);
        
        for(vector<int> v:p)
        {
            l[v[1]].push_back(v[0]);
        }
        
        return l;
    }
};