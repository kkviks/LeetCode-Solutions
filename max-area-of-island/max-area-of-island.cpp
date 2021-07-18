class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int ans = 0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int count = bfs(i,j,grid);
                    ans = max(ans,count);
                }
            }
        }
        return ans;
    }
    
    int bfs(int i,int j,vector<vector<int>> &grid)
    {
        int count = 0;
        queue<pair<int,int>> q;
        q.push({i,j});
        
        while(q.size())
        {
            auto p = q.front(); q.pop();
            int i = p.first, j = p.second;
            
            if(i<0 or j<0 or i>=grid.size() or j>=grid[i].size())
                continue;
            
            if(grid[i][j]==1){
                count++;
                grid[i][j] = 0;
            }else{
                continue;
            }
            
            q.push({i-1,j});
            q.push({i+1,j});
            q.push({i,j-1});
            q.push({i,j+1});
        }
        
        return count;
    }
    
};