struct Cross{
    int left, right, top, down;
    
    Cross(int x){
        left = right = top = down = x;
    }
};

class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        
        vector<vector<int>> grid(n, vector<int>(n, 1));
        for(auto &mine: mines){
            grid[mine[0]][mine[1]] = 0;
        }
  
        vector<vector<Cross>> dp(n,vector<Cross>(n,Cross(0)));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    dp[i][j] = Cross(0);
                }
                else if(i==0 and j==0)dp[i][j] = Cross(1);
                else if(i==0){
                    dp[i][j].left = dp[i][j-1].left + 1;
                    dp[i][j].top = 1;
                }else if(j==0){
                    dp[i][j].top = dp[i-1][j].top + 1;
                    dp[i][j].left = 1;
                }else{
                    dp[i][j].left = dp[i][j-1].left + 1;
                    dp[i][j].top = dp[i-1][j].top + 1;
                }
            }
        }
        
        int ans = 0;
        
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==0){
                    dp[i][j] = Cross(0);
                }
                else if(i==n-1 and j==n-1){
                    dp[i][j].down = dp[i][j].right = 1;
                }
                else if(i==n-1){
                    dp[i][j].right = dp[i][j+1].right + 1;
                    dp[i][j].down = 1;
                }else if(j==n-1){
                    dp[i][j].down = dp[i+1][j].down + 1;
                    dp[i][j].right = 1;
                }else{
                    dp[i][j].right = dp[i][j+1].right + 1;
                    dp[i][j].down = dp[i+1][j].down + 1;
                }
                
                int val = min({dp[i][j].left,dp[i][j].top,dp[i][j].right,dp[i][j].down});
                
                if(dp[i][j].left >= val and dp[i][j].right >= val and dp[i][j].top >= val and dp[i][j].down >= val){
                    ans = max(ans, val);
                }
                
            }
        }
        
        return ans;
    }
};