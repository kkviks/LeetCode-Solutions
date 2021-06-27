class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.')
                {
                    bool isValid = validate(i,j,board);
                    if(isValid==false)
                        return false;
                }
            }
        }
        
        return true;
    }
    
    bool validate(int i, int j, vector<vector<char>> const &board)
    {
        int row = i, col = j;
        
        //Validating row
        for(int i=0;i<board[row].size();i++)
        {
            if(i==col)
                continue;
            if(board[row][i]==board[row][col])
                return false;
        }
        
        //Validating column
        for(int i=0;i<board.size();i++)
        {
            if(i==row)
                continue;
            if(board[i][col]==board[row][col])
                return false;
        }
        
        //Validating current grid
        int rowStart = (row/3)*3;
        int colStart = (col/3)*3;
        
        for(int i=rowStart; i<rowStart+3;i++){
            for(int j=colStart; j<colStart+3;j++)
            {
                if(i!=row and j!=col and board[i][j]==board[row][col])
                    return false;
            }
        }
        
        return true;
    }
};