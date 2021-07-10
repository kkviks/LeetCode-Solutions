class Solution {
public:
    string replaceDigits(string s) {
        
        for(int i=1;i<s.size();i+=2)
        {
            s[i] = shift(s[i-1],s[i]);
        }
        
        return s;
    }
    
    char shift(char ch, char x)
    {
        return ch+(x-'0');
    }
};