class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int freq[52] = {0};
        
        for(auto &v:ranges)
        {
            freq[v[0]]++;
            freq[v[1]+1]--;
        }
        
        for(int i=1;i<52;i++)
        {
            freq[i] += freq[i-1];
        }
        
        for(int i=left;i<=right;i++)
        {
            if(freq[i]<=0)
                return false;
        }
        
        return true;
    }
};