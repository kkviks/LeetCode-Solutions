class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> set(brokenLetters.begin(), brokenLetters.end());
        int counter = 0;
        bool flag = true;
        for(int i=0;i<text.size();i++){
            if(text[i]==' '){
                counter += !!flag;
                flag = true;
            } else if(set.count(text[i])){
                flag = false;
            }
        }
        counter += !!flag;
        return counter;
    }
};