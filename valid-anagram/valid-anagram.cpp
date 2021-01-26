class Solution {
public:
    bool isAnagram(string s, string t) {
        //if(s==t and )return false;
        unordered_map<char,int> m; //<char,frequency>
        
        for(char ch: s){
            m[ch]++;
        }
        
        for(char ch: t){
            if(!m.count(ch))return false;
            m[ch]--;
            if(m[ch]==0)m.erase(ch);
        }
        
        return m.size()==0;
        
    }
};
