class Solution {
public:
    string largestNumber(vector<int>& a) {
        
        if(count(a.begin(),a.end(),0)==a.size())return "0";
        
        vector<string> v(a.size());
        
        for(int i=0;i<a.size();i++)
        {
            v[i] = to_string(a[i]);
        }
        
        
        sort(v.begin(), v.end(), comp);
        
        string ans = "";
        for(string s:v)
        {
            ans+= s;
        }
        
        return ans;
    }
    
    static bool comp(string a, string b)
    {
        return a+b>=b+a;
    }
};