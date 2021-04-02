class Solution {
public:
    vector<vector<int>> subsets(vector<int>& v) {
        int n = v.size();
        int last = (1<<n) -1;
        vector<vector<int>> subsets;
        subsets.push_back({});
        
        for(int i=1;i<=last;i++)
        {
            vector<int> temp;
            for(int j=0; (1<<j) <= i; j++)
            {
                if(i & (1<<j) )
                {
                    temp.push_back(v[n-1-j]);
                }
            }
            subsets.push_back(temp);
        }
        
        return subsets;
    }
};