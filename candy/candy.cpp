class Solution {
public:
    int candy(vector<int>& a) {
        int n = a.size();
        vector<int> v(n);
        
        v[0] = 1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i]>a[i-1])
                v[i] = v[i-1]+1;
            else
                v[i] = 1;
        }
        
        for(int j=n-2;j>=0;j--)
        {
            if(a[j]>a[j+1] and v[j]<=v[j+1])
                v[j] = v[j+1]+1;
        }
        
        int ans = 0;
        
        for(int &x:v)
            ans += x;
        
        return ans;
    }
};

    