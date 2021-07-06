class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        
        int n = a.size();
        vector<int> prefixProductLeft(n), prefixProductRight(n);
        
        for(int i=0, product = 1; i<n; i++)
        {
            prefixProductLeft[i] = product;
            product = product*a[i];
        }
        
        for(int i=n-1, product = 1; i>=0; i--)
        {
            prefixProductRight[i] = product;
            product = product*a[i];
        }
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++)
        {
            ans[i] = prefixProductLeft[i]*prefixProductRight[i];
        }
        
        return ans;        
    }
};

//[1,2,3,4]
//[x,1,2,6]
//[24,12,4,x]
//[24,12,8,6]