class Solution {
private:
    void toggle_row(vector<int> &v){
        for(int &x:v){
         if(x==0)x=1;
         else x = 0;
        }
    }
    
    void toggle_col(vector<vector<int>>& A,int col){
        for(int i=0;i<A.size();i++){
            if(A[i][col]==1)A[i][col]=0;
            else A[i][col]=1;
        }
    }
    
    int count(vector<vector<int>>& A, int col, int val){
        int count = 0;
        for(int i=0;i<A.size();i++){
            if(A[i][col]==val){
                count++;
            }
        }
        return count;
    }
    
    int score(vector<vector<int>>& A){
        int mul = 1;
        int sum = 0;
        for(int i=0 ; i < A.size(); i++){
            mul = 1 << (A[0].size()-1);
            for(int j = 0; j < A[0].size(); j++){
                sum += A[i][j]*mul;
                mul = mul >> 1;
            }
        }
        return sum;
    }
    
    void print(vector<vector<int>> &A){
        cout << endl;
        for(auto v:A){
            for(int i:v){
                cout << i << " ";
            }
            cout << endl;
        }
    }

public:
    int matrixScore(vector<vector<int>>& A) {
        for(int row = 0; row<A.size(); row++){
            if(A[row][0]==0){
                toggle_row(A[row]);
            }
        }
        for(int col = 0 ; col<A[0].size(); col++){
            
            if( count(A,col,1) < (A.size()/2 + A.size()%2) ){
                //cout << col << " ";
                toggle_col(A,col);
            }
        }
        
        return score(A);
    }
};