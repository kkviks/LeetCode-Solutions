class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        string s, rev;
        try{
            s = to_string(x);
            rev = s;
            reverse(rev.begin(),rev.end());
        }catch(...){
            return false;
        }
        return s == rev;
    }
};