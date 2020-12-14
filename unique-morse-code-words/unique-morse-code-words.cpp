class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string codes[]={".-","-...","-.-.","-..",".","..-.",
                        "--.","....","..",".---","-.-",".-..",
                        "--","-.","---",".--.","--.-",".-.","...","-",
                        "..-","...-",".--","-..-","-.--","--.."};
        
        string s = "";
        set<string> stringSet;
        for(string word: words){
            s="";
            for(char ch: word){
                s+=codes[ch-'a'];
            }
            stringSet.insert(s);
        }
        return stringSet.size();
    }
};
