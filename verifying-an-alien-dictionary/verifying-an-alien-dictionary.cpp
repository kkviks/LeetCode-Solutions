class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int map[26];
        
        for(int i=0;i<26;i++){
            map[order[i]-'a']=i;
        }
        
        for(int i=1;i<words.size();i++){
            if(isLess(words[i-1],words[i], map)==false){
                return false;
            }
        }
        
        return true;
    }
    
    bool isLess(string a, string b, int dict[]){
        int size = min(a.size(),b.size());
        
        for(int i=0;i<size;i++){
            int idx1 = dict[a[i]-'a'];
            int idx2 = dict[b[i]-'a'];
            
            if(idx1==idx2)continue;
            if(idx1>idx2)return false;
            if(idx2>idx1)return true;
        }
        return b.size() >= a.size();
    }
};