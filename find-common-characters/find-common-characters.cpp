class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> count(26,INT_MAX);
        
        for(string word:A){
            vector<int> currWordCount(26,0);
            for(char ch:word){
                currWordCount[ch-'a']++;
            }
            
            for(int i=0;i<26;i++){
                count[i] = min(count[i],currWordCount[i]);
            }
        }
        
        vector<string> ans;
        
        for(int i=0;i<26;i++){
            while(count[i]-->0){
                char ch = i+'a';
                string s(1,ch);
                ans.push_back(s);
            }
        }
        
        return ans;
    }
    
};