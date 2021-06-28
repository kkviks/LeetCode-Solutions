class Solution {
public:
    string longestPalindrome(string s) {
        
        int max_size = 1;
        string ans = s.substr(0,1);
        
        for(int i=0;i<s.size();i++)
        {
            int l = i-1, r = i+1;
            int size = 1;
            while(l>=0 and s[l]==s[r])
            {
                size+=2;
                l--; r++;
            }
            if(size>max_size){
                max_size = size;
                ans = s.substr(l+1,size);
            }
            
            l = i, r = i+1;
            size = 0;
            while(l>=0 and r<s.size() and s[l]==s[r])
            {
                size+=2;
                l--; r++;
            }
            if(size>max_size){
                max_size = size;
                ans = s.substr(l+1,size);
            }
        }
        
        cout << max_size << " ";
        return ans;
    }
};