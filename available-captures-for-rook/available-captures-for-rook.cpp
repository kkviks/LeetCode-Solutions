class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        pair<int,int> init_loc = getLocation(board);
        
        int x = init_loc.first, y = init_loc.second;
        int i=x, j = y;
        int count = 0;
        
        while(i>=0){
            if(board[i][j]=='B')break;
            if(board[i][j]=='p'){
                count++;
                break;
            }
            i--;
        }
        
        i = x, j = y;
        
        while(i<8){
            if(board[i][j]=='B')break;
            if(board[i][j]=='p'){
                count++;
                break;
            }
            i++;
        }
        
        i = x, j = y;
        
        while(j>=0){
            if(board[i][j]=='B')break;
            if(board[i][j]=='p'){
                count++;
                break;
            }
            j--;
        }
        
        i = x, j = y;
        
        while(j<8){
            if(board[i][j]=='B')break;
            if(board[i][j]=='p'){
                count++;
                break;
            }
            j++;
        }
        
        return count;
    }
    pair<int,int> getLocation(vector<vector<char>> &board) const{
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R')
                    return {i,j};
            }
        }
        return {};
    }
};