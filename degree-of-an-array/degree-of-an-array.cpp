class Solution {
public:
    int findShortestSubArray(vector<int>& a) {
        
        const int n = 1e5+1;
        int count[n]={0};
        
        int max_f = 0;
        int min_window = INT_MAX;
        
        for(int x:a)
        {
            count[x]++;
            max_f = max(max_f,count[x]);
        }
        
        for(int i=0;i<n;i++)
        {
            if(count[i]==max_f)
            {
                int window_size = window(a,i);
                min_window = min(min_window,window_size);
            }
        }
        
        return min_window;        
    }
    
    int window(vector<int> &a, int x)
    {
        int l, r;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==x)
            {
                l = i; break;
            }
        }
        
        for(int i=a.size()-1;i>=0;i--)
        {
            if(a[i]==x)
            {
                r = i; break;
            }
        }
        
        return r-l+1;
    }
};