class Solution {
public:
    int numSteps(string s) {
        
        int divisions = s.size()-1;
        int additions = 0, carry=0;
        
        for(int i=s.size()-1; i>0; i--)
        {
            additions += (s[i]-'0'+carry==1);
            carry = s[i]-'0' or carry;
        }
        
        return divisions + additions + carry;
    }
};