class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        vector<vector<int>> ans = board;
        
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                
                int liveNbrs = getLiveNbrs(i,j, board);
                
                cout << liveNbrs << " ";
                
                if(board[i][j]==1){
                    
                    if(liveNbrs<2)ans[i][j] = 0;
                    else if(liveNbrs>3)ans[i][j]=0;
                    
                }else if(board[i][j]==0){
                    if(liveNbrs==3){
                        ans[i][j]=1;
                    }
                }
            }
            cout << endl;
        }
        
        board = ans;
    }
    
    int getLiveNbrs(int i, int j,vector<vector<int>> &board){
        
        int count = 0;
        const int dx[] = {0,1,1,1,0,-1,-1,-1};
        const int dy[] = {1,1,0,-1,-1,-1,0,1};
        
        for(int k=0;k<8;k++){
            int nbr_x = i+dx[k];
            int nbr_y = j+dy[k];
            if(nbr_x>=0 and nbr_y>=0 and 
               nbr_x<board.size() and nbr_y<board[0].size()){
                count += !!(board[nbr_x][nbr_y]==1);
            }
        }
        
        return count;
    }
};