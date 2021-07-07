class Solution {
public:
    vector<string> summaryRanges(vector<int>& a) {
        
        int n = a.size();
        if(n==0)return {};
        
        int idx = 0;
        vector<string> ans;
        
        for(int i=1;i<n;i++)
        {
            if(1LL*a[i]-a[i-1]==1)
                continue;
            
            if(i-1==idx)
            {
                string s = to_string(a[idx]);
                ans.push_back(s);
            }else
            {
                string s = to_string(a[idx]) + "->" + to_string(a[i-1]);
                ans.push_back(s);
            }
            idx = i;
        }
        
        if(idx==n-1)
        {
            string s = to_string(a[idx]);
            ans.push_back(s);
        }else
        {
            string s = to_string(a[idx]) + "->" + to_string(a[n-1]);
            ans.push_back(s);
        }
        
        return ans;
        
    }
};

//[0,2,3,4,6,8,9]

//[0,1,2,4,5,7]