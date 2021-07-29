class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        unordered_set<char> set(begin(brokenLetters), end(brokenLetters));
        
        int count = 0;
        bool flag = true;
        
        for(int i=0;i<text.size();i++)
        {
            if(text[i]== ' ')
            {
                count += flag;
                flag = true;
            }else if(set.count(text[i]))
            {
                    flag = false;
            }
        }
        
        count += flag;
        
        return count;
    }
};