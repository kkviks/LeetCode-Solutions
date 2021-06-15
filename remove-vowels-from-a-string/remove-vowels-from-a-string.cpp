class Solution {
public:
    string removeVowels(string s) {
        string ans = "";
        for(char ch:s){
            if(ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u')continue;
            ans += ch;
        }
        return ans;
    }
};