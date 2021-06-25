class Solution {
private:
    int dx[4] = {-1,0,+1,0};
    int dy[4] = {0,-1,0,+1};
public:
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        
        vector<vector<char>> &visited = grid; // 1 => not visited 0 => visited
        
        int count = 0;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(visited[i][j]=='1') // 1=> not visited
                    count++;
                    dfs(i,j,visited);
            }
        }
        
        return count;
    }
    
    void dfs(int i, int j, vector<vector<char>> &visited){
        if(i<0 or j<0 or i>=visited.size() or j>=visited[0].size())
            return;
        if(visited[i][j]=='0')
            return;
        
        visited[i][j]='0';
        
        for(int k=0; k<4;k++){
            dfs(i+dx[k], j+dy[k], visited);
        }
    }
};