class Solution {
public:
    string toLowerCase(string str) {
        string s = "";
        
        for(char ch:str){
            if(ch>='A' and ch<='Z')ch = ch - 'A' + 'a';
            s += ch;
        }
        
        return s;
    }
};