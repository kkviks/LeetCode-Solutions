class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> v(numRows);
        
        for(int i=0;i< numRows;i++){
            for(int j=0;j<=i;j++){
                v[i].push_back(1);
            }
        }
        
        for(int i=2;i<numRows;i++){
            for(int j=1; j< v[i].size()-1; j++){
                v[i][j] = v[i-1][j-1]+v[i-1][j];
            }
        }
        
        return v;
    }
};