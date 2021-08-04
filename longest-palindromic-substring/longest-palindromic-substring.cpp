class Solution {
public:
    string longestPalindrome(string s) {
        int max_size = 1;
        string str = s.substr(0,1);
        int start = 0;
        
        for(int i=0;i<s.size();i++){
            int l = i-1, r = i+1;
            int size = 1;
            while(l>=0 and s[l]==s[r] and r<s.size()){
                size+=2;
                l--, r++;
            }
            
            if(size>max_size){
                max_size = size;
                start = l+1;
            }
            
            l= i, r= i+1;
            size = 0;
            while(l>=0 and s[l]==s[r] and r<s.size()){
                size+=2;
                l--, r++;
            }
            
            if(size>max_size){
                max_size = size;
                start = l+1;
            }
        }
        
        return s.substr(start,max_size);
    }
};