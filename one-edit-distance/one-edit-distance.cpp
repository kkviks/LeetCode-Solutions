class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        
        if(t.size()<s.size())
                swap(t,s);
            
        assert(t.size()>=s.size());
        
        if( t.size()-s.size()>1)return false;
        
        if(s.size()==t.size())
        {
            int ok = 0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==t[i])ok++;
            }
            
            if(ok==s.size()-1)return true;
            else return false;
        }else
        {
            
            int i = 0, j = 0;
            int not_ok = 0;
            
            while(i<s.size())
            {
                if(s[i]==t[j])
                    i++, j++;
                else
                {
                    not_ok++;
                    if(not_ok>1)
                        return false;
                    j++;
                }
            }
            
            return true;
            
        }
        
        return true;
    }

    
};

