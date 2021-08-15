class Solution {
private:
     unordered_map<char,string> m = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        if(digits.empty())
            return ans;
        ans.push_back("");
        
        for(char d: digits){
            vector<string> temp;
            for(char ch:m[d])
            {
                for(string s:ans)
                {
                    temp.push_back(s+ch);
                }
            }
            ans = temp;
        }
        
        return ans;
    }
    
   
};