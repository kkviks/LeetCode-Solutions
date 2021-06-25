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
                {
                    count++;
                    bfs(i,j,visited);
                }
                    
            }
        }
        
        return count;
    }
    
    void bfs(int i, int j, vector<vector<char>> &visited){
        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j]='0';
        
        while(!q.empty()){
            auto [i,j] = q.front(); q.pop();
            
            for(int k=0;k<4;k++){
                int x = i+dx[k];
                int y = j+dy[k];
                if(check(x, y, visited)){
                    q.push({x, y});
                    visited[x][y]='0';
                }
            }
        }
    }
    
    bool check(int i, int j,vector<vector<char>> &visited ){
        return i>=0 and j>=0 and i<visited.size() and j<visited[i].size() and visited[i][j]=='1';
    }
};