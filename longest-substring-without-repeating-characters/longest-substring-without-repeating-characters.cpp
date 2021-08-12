class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0)return 0;
        
        unordered_map<char,int> m;                       //   "abba"
        
        int l=0,r=0;
        int ans = 0;
        
        while(r<n){
            char ch = s[r];
            if(m.count(ch)){
                l = max(l,m[ch]+1);
            }
            ans = max(ans,r-l+1);
            m[ch] = r;
            r++;
        }
        
        return ans;
    }
};