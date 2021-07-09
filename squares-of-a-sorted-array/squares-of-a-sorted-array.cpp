class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        vector<int> ans(a.size());
        
        int n = a.size();
        int i = 0, j = n-1;
        int idx = n-1;
        
        while(i<=j)
        {
            int r = a[j]*a[j];
            int l = a[i]*a[i];
            
            if(r>l)
            {
                ans[idx] = r;
                idx--, j--;
            }
            else{
                ans[idx] = l;
                idx--, i++;
            }
        }
        
        return ans;
    }
};