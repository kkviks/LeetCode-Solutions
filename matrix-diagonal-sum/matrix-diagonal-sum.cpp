class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        int n = mat.size();
        for(int i=0;i<mat.size();i++){
            s += mat[i][i];
            if(i!=n-1-i)s +=mat[i][n-1-i];
        }
        return s;
    }
};