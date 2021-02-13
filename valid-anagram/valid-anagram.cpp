class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int a[26] = {0};
        for(char ch:s)a[ch-'a']++;
        for(char ch:t){
            if(--a[ch-'a']<0)return false;
        }
        return true;
    }
};