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
        solve(digits,ans);
        
        return ans;
    }
    
    void solve(string digits,vector<string> &ans)
    {
        if(digits.size()==0)
            return;
        
        if(digits.size()==1){
            string s = m[digits[0]];
            for(char ch:s)
            {
                string temp(1,ch);
                ans.push_back(temp);
            }
            return;
        }
        
        solve(digits.substr(1),ans);
        
        string s = m[digits[0]];
        vector<string> temp;
        
        for(char ch:s)
        {
            for(string curr:ans)
            {
                string t(1,ch);
                temp.push_back(t+curr);
            }
        }
        ans.clear();
        for(auto x:temp)
            ans.push_back(x);
        
        return;
    }
};