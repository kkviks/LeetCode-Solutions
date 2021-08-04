class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int R = matrix.size();
        int C = matrix[0].size();
        
        bool flagRow = false, flagCol = false;
        
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                    if(i==0)flagRow = true;
                    if(j==0)flagCol = true;
                }
            }
        }
        
        for(int i=1;i<R;i++){
            for(int j=1;j<C;j++){
                if(matrix[i][0]==0 or matrix[0][j]==0)
                    matrix[i][j] = 0;
            }
        }
        
        if(flagRow)for(int j=0;j<C;j++)matrix[0][j] = 0;
        if(flagCol)for(int i=0;i<R;i++)matrix[i][0] = 0;
        
    }
};