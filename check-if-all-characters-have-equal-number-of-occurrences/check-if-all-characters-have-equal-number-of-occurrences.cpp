class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int f[26] = {0};
        
        for(char ch:s)
        {
            f[ch-'a']++;
        }
        
        int x = f[s[0]-'a'];
        
        for(int i=0;i<26;i++)
        {
            if(f[i]!=0 and f[i]!=x)
                return false;
        }
        
        return true;
    }
};