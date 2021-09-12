class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int colMax[n], rowMax[n];
        
        for(int i=0;i<n;i++){
            rowMax[i] = colMax[i] = INT_MIN;
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val = grid[i][j];
                rowMax[i] = max(rowMax[i],val);
                colMax[j] = max(colMax[j],val);
            }
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans += min(rowMax[i],colMax[j]) - grid[i][j];
            }
        }
        
        return ans;
    }
};