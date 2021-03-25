class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int ans = 0;
        
        for(int i=0;i<s.size();i++)
        {
            ans = ans^s[i]^t[i];
        }
        
        return static_cast<char>(ans^t[s.size()]);        
    }
};