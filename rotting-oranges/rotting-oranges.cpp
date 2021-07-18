class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j] == 1)
                    grid[i][j] = INT_MAX;
                else if(grid[i][j]==2)
                    grid[i][j] = -1;
            }
        }
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==-1)
                    dfs(i,j,grid,0);
            }
        }
        
        int ans = 0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                ans = max(ans,grid[i][j]);
            }
        }
        if(ans == INT_MAX)
            return -1;
        
        return ans;
    }
    
    void dfs(int i,int j,vector<vector<int>> &grid,int time)
    {
        if(i<0 or j<0 or i>=grid.size() or j>=grid[i].size())
            return;
        
        if(grid[i][j]==0)return;
        
        if(grid[i][j]==-1 and time!=0)return;
        
        if(grid[i][j]>0 and grid[i][j]<=time)return;
        
        if(grid[i][j]!=-1)
            grid[i][j] = time;
        
        dfs(i-1,j,grid,time+1);
        dfs(i+1,j,grid,time+1);
        dfs(i,j-1,grid,time+1);
        dfs(i,j+1,grid,time+1);
        
    }
};