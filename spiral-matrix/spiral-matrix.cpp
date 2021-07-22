class Solution {
private:
    vector<int> ans;
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int m = a.size(), n = a[0].size();
        
        for(int i=0, j=0; i<m and j<n; i++, j++, m--,n--)
        {
            traverse_boundary(i,j,m,n,a);
        }
        
        return ans;
    }
    
    void traverse_boundary(int r_idx,int c_idx, int m, int n,vector<vector<int>>& a )
    {
        for(int c=c_idx ; c<n ; c++)
            ans.push_back(a[r_idx][c]);
        
        for(int r = r_idx+1; r<m ; r++)
            ans.push_back(a[r][n-1]);
        
        if(r_idx<m-1 and c_idx<n-1)
        {
            for(int c = n-2; c>c_idx; c--)
                ans.push_back(a[m-1][c]);
        
            for(int r = m-1; r > r_idx; r--)
             ans.push_back(a[r][c_idx]);
        }
    }
};