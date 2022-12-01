class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> set{'a','e','i','o','u'};
        int n = s.size();
        assert(n%2==0);
        
        int i = 0, j = n-1;
        int flag = 0;
        while(i<j) {
            flag += set.count(tolower(s[i]));
            flag -= set.count(tolower(s[j]));
            i++; j--;
        }
        
        return flag==0;
    }
};