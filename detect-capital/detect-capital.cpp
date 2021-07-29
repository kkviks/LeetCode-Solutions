class Solution {
public:
    bool detectCapitalUse(string word) {
        int num_caps = 0;
        bool first_cap = false;
        
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            if(ch>='A' and ch<='Z')
            {
                if(i==0)
                    first_cap = true;
                num_caps++;
            }
        }
        
        return (num_caps==1 and first_cap) or num_caps==word.size() or num_caps==0;
    }
};