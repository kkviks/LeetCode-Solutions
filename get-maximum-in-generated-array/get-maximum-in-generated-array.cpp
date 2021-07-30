class Solution {
public:
    int getMaximumGenerated(int n) {
        
        if(n<2)
            return n;
        
        vector<int> v(n+1);
        v[0] = 0;
        v[1] = 1;
        
        int ans = max(v[0],v[1]);
        
        for(int i=1;2*i<n+1;i++)
        {
            v[2*i] = v[i];
            if(2*i+1<n+1)
            {
                v[2*i+1] = v[i] + v[i+1];
            }
            
        }
        
        return *max_element(v.begin(), v.end());
    }
};