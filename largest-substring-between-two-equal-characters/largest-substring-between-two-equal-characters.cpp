class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,list<int>> m;
        
        int idx = 0;
        for(char ch:s)
        {
            m[ch].push_back(idx);
            idx++;
        }
        
        int max_d = INT_MIN;
        for(auto p:m)
        {
            int r = p.second.back();
            int l = p.second.front();
            
            int d = (r-l+1)-2;
            max_d = max(max_d,d);
        }  
        
        return max_d;
    }
};