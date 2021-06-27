class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            for(int j = 0; j<9;j++)
            {
                if(board[i][j]=='.')
                {
                    dfs(i,j,board);
                    cout << isValidSudoku(board);
                    return;
                }
            }
        }
    }
    
    bool dfs(int row, int col, vector<vector<char>>& board)
    {
        if(col==9)
            return dfs(row+1,0, board);
        
        if(row==9)
            return true;
        
        if(board[row][col]!='.')
            return dfs(row,col+1,board);
        
        for(char num='1'; num<='9'; num++){
            board[row][col] = num;
            
            if(isSafe(row,col,board))
            {
                bool isSolvable = dfs(row,col+1,board);
                if(isSolvable)
                    return true;
            }
            board[row][col] = '.';
        }
        
        return false;
    }
    
    bool isSafe(int i, int j, vector<vector<char>> const &board)
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
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.')
                {
                    bool isValid = isSafe(i,j,board);
                    if(isValid==false)
                        return false;
                }
            }
        }
        
        return true;
    }
};