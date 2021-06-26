class Solution {
public:
    int firstUniqChar(string s) {
        int f[26]={0};
        
        for(char ch:s){
            f[ch-'a']++;    
        }
        
        for(int i=0;i<s.length();i++){
            if(f[s[i]-'a']==1)
                return i;
        }
        
        return -1;
    }
};