class Solution {
public:
    int compareVersion(string a, string b) {
        
        string s1, s2;
        int i = 0, j = 0;
        
        while(i<a.size() or j<b.size())
        {
            s1 = "0";
            while(i<a.size() and a[i]!='.')
            {
                s1+=a[i];
                i++;
            }
            
            s2 = "0";
            while(j<b.size() and b[j]!='.')
            {
                s2+=b[j];
                j++;
            }
            
            int v1 = stoi(s1);
            int v2 = stoi(s2);
            
            if(v1<v2)return -1;
            else if(v1>v2)return 1;
            
            i++; j++;
            
        }
        
        
        return 0;
    }
};