class Solution {
public:
    bool halvesAreAlike(string s) {
        
        unordered_set<char> set = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int i = 0;
        int count = 0;
        
        while(i<s.size()/2)
        {
            if(set.count(s[i++]))
                count++;
        }
        
        while(i<s.size())
        {
            if(set.count(s[i++]))
                count--;
        }
        
        return count==0;
    }
};