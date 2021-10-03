class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        vector<int> ref(26,0);
        
        for(char ch:chars)
            ref[ch-'a']++;
        
        for(string word:words){
            vector<int> v = ref;
            bool flag = true;
            for(char ch:word){
                if(--v[ch-'a']==-1){
                    flag = false;
                    break;
                }
            }
            if(flag)ans += word.size();
        }
        
        return ans;
    }
};