class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        int dir = -1;
        vector<int> ans;
        ans.push_back(mat[0][0]);
        pair<int,int> tp = {0,0};
        int count = rows*cols;
        count--;
        
        while(count>0)
        {
            
            if(dir==1)
            {
                int r,c;
                auto &[tpr,tpc] = tp;
                if(tpr!=rows-1)
                    r = tpr+1, c = tpc;
                else
                    r = tpr, c = tpc+1;
                while(r>=0 and c<cols and r<rows and c>=0)
                {
                    ans.push_back(mat[r][c]);
                    tp = {r,c};
                    count--;
                    r = r-1, c = c+1;
                }
                dir = -dir;
                    
            }
            else
            {
                int r,c;
                auto &[tpr,tpc] = tp;
                if(tpc!=cols-1)
                    r = tpr, c = tpc+1;
                else
                    r = tpr+1, c = tpc;
                while(r>=0 and c<cols and r<rows and c>=0)
                {
                    ans.push_back(mat[r][c]);
                    count--;
                    tp = {r,c};
                    r = r+1, c = c-1;
                }
                dir = -dir;
            }
        }
        
        return ans;
    }
};