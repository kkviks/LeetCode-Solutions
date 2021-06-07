class Solution {
private:
    bool isBipartite_helper(int node, int parent, vector<vector<int>>& l, vector<int> &visited, int color){
        visited[node] = color;
        for(auto nbr:l[node]){
            if(visited[nbr]==-1){
                bool ok = isBipartite_helper(nbr,node,l,visited,1-color);
                if(ok == false)return false;
            }else if(nbr!=parent and visited[nbr]==color)return false;
        }
        return true;
    } 
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> visited(graph.size(),-1);
        bool ans = true;
        for(int i=0;i<visited.size();i++){
            if(visited[i]==-1)
                ans &= isBipartite_helper(i,-1,graph,visited,0);
        }
        return ans;
    }
};