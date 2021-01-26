class Solution {
public:
    int longestPalindrome(string s) {
        
        int lower[26] = {0};
        int upper[26] = {0};
        
        for(char ch: s){
            if(ch>='a' and ch<='z')lower[ch-'a']++;
            else upper[ch-'A']++;
        }
        
        int count = 0;
        int hasOdd = 0;
        for(int i=0;i<26;i++){
        
            if(lower[i]&1)hasOdd = 1;
            count += lower[i]/2;
            
            if(upper[i]&1)hasOdd = 1;
            count += upper[i]/2;
        }
        
        int ans = 2*count + hasOdd;
        return ans;
    }
};
