class Solution {
public:
    int maxProduct(vector<int>& a) {
        
        if(a.size()==1)
            return a[0];
        
        int x = max(0,a[0]);
        int y = min(0,a[0]);
        
        int ans = x;
        
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>=0)
            {
                x = max(a[i],a[i]*x);
                y = y*a[i];
            }else
            {
                int t = y;
                y = min(a[i],x*a[i]);
                x = t*a[i];
            }
            ans = max(ans,x);
        }
        
        return ans;
    }
};