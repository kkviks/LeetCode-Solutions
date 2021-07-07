class Solution {
public:
    int nextGreaterElement(int n) {
        
        string s = to_string(n);
        
        if(s.size()==1)return -1;
        
        for(int i=s.size()-2;i>=0;i--)
        {
            if(s[i]>=s[i+1])
                continue;
            
            char ch = s[i+1];
            int idx = i+1;
            for(int j=i+1;j<s.size();j++)
            {
                if(s[j]<ch and s[j]>s[i])
                    ch = s[j], idx = j;
                    
            }
            swap(s[i], s[idx]);
            sort(s.begin()+i+1,s.end());
            
            try{
                int ans = stoi(s);
                return ans;
            }
            catch(...)
            {
                return -1;
            }
            
        }
        
        return -1;
    }
};