class Solution {
public:
    int maxPower(string s) {
        int len = 1;
        int max_len = 1;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                len++;
            else{
                max_len = max(max_len,len);
                len = 1;
            }
        }
        max_len = max(max_len,len);
        return max_len;
    }
};