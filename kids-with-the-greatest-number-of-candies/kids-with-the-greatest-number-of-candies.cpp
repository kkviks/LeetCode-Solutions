class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int x) {
        
        int M = v[0];
        for(int i=1;i<v.size();i++)
        {
            M = max(M,v[i]);
        }
        
        vector<bool> a;
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]+x>=M)a.push_back(true);
            else a.push_back(false);
        }
        
        return a;
        
    }
};