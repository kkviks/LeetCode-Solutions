class Solution {
public:
    int numDifferentIntegers(string word) {
        string num = "";
        
        unordered_set<string> set;
        
        for(char ch:word)
        {
            if(ch>='a' and ch<='z'){
                if(!num.empty())
                {
                    set.insert(f(num));
                    num ="";
                }
            }else{
                num += ch;
            }
        }
        
        if(!num.empty())
        {
            set.insert(f(num));
        }    
        return set.size();
    }
    
    string f(string num)
    {
        for(int i=0;i<num.size();i++)
        {
            if(num[i]!='0')
                return num.substr(i);
        }
        
        return "0";
    }
                               
};