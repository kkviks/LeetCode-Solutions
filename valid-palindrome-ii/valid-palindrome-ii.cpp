class Solution {
public:
    bool validPalindrome(string s) {
        
        int n = s.size();
        int i = 0, j = n-1;
        
        while(i<j)
        {
            if(s[i]==s[j])
            {
                i++; j--;
            }else
            {
                if(isPelindrome(i+1,j,s) or isPelindrome(i,j-1,s))
                    return true;
                else
                    return false;
            }
        }
        
        return true;
    }
    
    bool isPelindrome(int i, int j, string s)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++, j--;
        }
        
        return true;
    }
};