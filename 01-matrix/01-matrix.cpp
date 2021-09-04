class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mat[i][j]==0){
                    dp[i][j] = 0;
                    continue;
                }
                
                if(i==0 and j==0)dp[i][j] = 1e5;
                else if(i==0)dp[i][j] = dp[i][j-1]+1;
                else if(j==0)dp[i][j] = dp[i-1][j]+1;
                else dp[i][j] = min(dp[i-1][j]+1,dp[i][j-1]+1);
            }
        }
        
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(mat[i][j]==0){
                    dp[i][j] = 0;
                    continue;
                }
                
                if(i==m-1 and j==n-1)dp[i][j] = min(dp[i][j],INT_MAX);
                else if(i==m-1)dp[i][j] = min(dp[i][j], dp[i][j+1]+1);
                else if(j==n-1)dp[i][j] = min(dp[i][j],dp[i+1][j]+1);
                else dp[i][j] = min({dp[i][j],dp[i+1][j]+1,dp[i][j+1]+1});
            }
        }
        
        return dp;
    }
};