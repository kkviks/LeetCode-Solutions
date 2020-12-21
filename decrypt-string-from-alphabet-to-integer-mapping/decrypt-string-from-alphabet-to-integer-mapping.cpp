class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        int len = s.length();
        for(int i=0;i<len;i++){
            if(i==len-1 or i==len-2){
                char ch = s[i]-'1'+'a';
                ans+=ch;
                continue;
            }
            switch(s[i]){
                case '1':
                if(s[i+2]=='#'){
                    int val = 10 + (s[i+1]-'1');
                    char ch = val+'a';
                    ans+=ch;
                    i+=2;
                }else{
                    ans+='a';
                }break;
​
                case '2':
                if(s[i+1]<='6' and s[i+1]>='0' and s[i+2]=='#'){
                    int val = 20+(s[i+1]-'1');
                    char ch = val+'a';
                    ans+=ch;
                    i+=2;
                }else{
                    ans+='b';
                }
                    break;
                default:
                    char ch = s[i]-'1'+'a'; 
                    ans += ch;
            }
        }
        return ans;
    }
};
