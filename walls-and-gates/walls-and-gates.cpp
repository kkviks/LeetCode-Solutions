class Solution {
public:
    void wallsAndGates(vector<vector<int>>& grid) {
        const int INF = 2147483647;
        queue<pair<int,int>> q;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0)
                    q.push({i,j});
            }
        }
        
        int dist = 0;
        
        while(q.size())
        {
            for(int z = q.size()-1; z>=0; z--)
            {
                pair<int,int> p = q.front(); q.pop();
                int i = p.first, j = p.second;
                
                if(i<0 or j<0 or i>=grid.size() or j>=grid[i].size())
                    continue;
                
                if(grid[i][j]==-1)
                    continue;
                
                if(grid[i][j]==0 and dist!=0)
                    continue;
                
                if(grid[i][j]>0 and grid[i][j]<=dist)
                    continue;
                
                if(grid[i][j]!=0)
                    grid[i][j] = dist;
                
                q.push({i-1,j});
                q.push({i+1,j});
                q.push({i,j-1});
                q.push({i,j+1});
            }
            dist++;
        }
        
        return;
    }
};