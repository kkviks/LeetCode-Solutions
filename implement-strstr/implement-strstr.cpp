/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */
​
// @lc code=start
class Solution {
private:
    bool check(string haystack, string needle, int idx){
        for(int i=0;i<needle.length() ;i++){
            if(haystack[idx++]!=needle[i])return false;
        }
        return true;
    }
​
public:
    int strStr(string haystack, string needle) {
        if(haystack.length()<needle.length())return -1;
        else if(haystack == needle )return 0;
        else if(needle == "")return 0;
        for(int i=0;i<haystack.length();i++){
            if(haystack.length()-i<needle.length())return -1;
            if(haystack[i] == needle[0]){
                if(check(haystack,needle,i))return i;
            }
        }
        return -1;
    }
};
// @lc code=end
​
​
