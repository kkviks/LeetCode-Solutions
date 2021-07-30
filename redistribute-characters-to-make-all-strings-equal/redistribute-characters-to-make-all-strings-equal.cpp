class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        int count[26] = {0};
        
        for(string s:words)
        {
            for(char ch:s){
                count[ch-'a']++;
            }
        }
        
        int n = words.size();
        
        for(int i=0;i<26;i++)
        {
            if(count[i]%n!=0)
                return false;
        }
        
        return true;
    }
};