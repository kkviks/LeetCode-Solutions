class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        int j = s.size()-1;
        while(j>=0 and s[j]==' ')j--;
        while(j>=0 and s[j]!=' '){
            len++; j--;
        }
        return len;
    }
};