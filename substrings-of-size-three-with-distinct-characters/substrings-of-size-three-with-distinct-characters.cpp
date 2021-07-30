class Solution {
public:
    int countGoodSubstrings(string s) {
        
        if(s.size()<3)
            return 0;
        
        vector<char> prev;
        
        for(int i=0;i<s.size() and i<3;i++)
        {
            prev.push_back(s[i]);
        }
        
        int count = isDistinct(prev);
        
        for(int i=3;i<s.size();i++)
        {
            prev[0] = prev[1];
            prev[1] = prev[2];
            prev[2] = s[i];
            
            count += isDistinct(prev);
        }
        
        return count;
    }
    
    bool isDistinct(vector<char> &prev)
    {
        return prev[0]!=prev[1] and prev[1]!=prev[2] and prev[2]!=prev[0];
    }
    
};