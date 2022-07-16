class Solution {
public:
    int strStr(string haystack, string needle) {
        
        for(int i=0;i<haystack.size();++i){
            bool flag = true;
            for(int j=0;j<needle.size();++j){
                if(haystack[i+j]!=needle[j]){
                    flag = false;
                    break;
                }
            }
            if(flag == true)
                return i;
        }
        return -1;
    }
};