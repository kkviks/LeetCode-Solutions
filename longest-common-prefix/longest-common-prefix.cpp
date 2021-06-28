class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_length = INT_MAX;
        string minStr="";
        
        for(string &s:strs)
        {
            if(s.length()<min_length)
            {
                min_length = s.size();
                minStr = s;
            }
        }
        
        string ans = "", prefix ="";
        
        for(char ch:minStr)
        {
            prefix += ch;
            for(string s:strs)
            {
                if(s.find(prefix)==string::npos or s.find(prefix)!=0)
                {
                    return ans;
                }
            }
            
            ans += ch;
        }
        
        return ans;
    }
};