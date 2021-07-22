class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        
        vector<string> ans;
        if(s.size()<2)
            return ans;
        
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='+' and s[i-1]=='+')
            {
                string t = s;
                t[i] = '-';
                t[i-1] = '-';
                ans.push_back(t);
            }
        }
        return ans;
    }
};