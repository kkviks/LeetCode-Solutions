class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int dict[26];
        
        for(int i=0;i<keyboard.size();i++){
            dict[keyboard[i]-'a']=i;
        }
        
        int time = dict[word[0]-'a'];
        
        for(int i=1;i<word.size();i++){
            time += abs(dict[word[i]-'a']-dict[word[i-1]-'a']);
        }
        
        return time;
    }
};