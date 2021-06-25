class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = 0;
        int n = isConnected.size();
        vector<bool> visited(n,false);
        
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(i,isConnected,visited);
            }
        }
        
        return count;
    }
    
    void dfs(int src, vector<vector<int>> &isConnected, vector<bool> &visited){
        visited[src]=true;
        
        for(int i=0;i<isConnected.size();i++){
            if(i==src)continue;
            if(isConnected[src][i] and !visited[i])
                dfs(i,isConnected, visited);
        }
    }
};