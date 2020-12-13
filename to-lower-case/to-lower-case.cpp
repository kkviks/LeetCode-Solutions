class Solution {
public:
    string toLowerCase(string str){
        string ans = "";
        
        for(char ch: str){
            if(ch>='A' and ch<='Z')ch += 32;
            ans += ch;
        }
        
        return ans; 
    }
};
