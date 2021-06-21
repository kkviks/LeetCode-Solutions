class Solution {
    
public:
    vector<int> getRow(int rowIndex) {
        
        int dp[35][35];
        memset(dp,-1,sizeof dp);
        
        vector<int> v(rowIndex+1);
        
        for(int i=0;i<=rowIndex;i++){
            v[i] = solve(rowIndex+1, i+1, dp);
        }
        return v;
    }
    
    int solve(int i, int j, int dp[][35]){
        if(j==1 or j==i)return 1;
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        return dp[i][j] = solve(i-1, j, dp) + solve(i-1, j-1, dp);
    }
};