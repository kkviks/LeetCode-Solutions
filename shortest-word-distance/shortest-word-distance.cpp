class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        
        vector<int> v1, v2;
        v1.reserve(wordsDict.size());
        v2.reserve(wordsDict.size());
        
        int idx = 0;
        for(string word: wordsDict){
            
            if(word==word1)
                v1.push_back(idx);
            if(word==word2)
                v2.push_back(idx);
            
            idx++;
        }
        
        int min_diff = INT_MAX;
        
        for(int idx1: v1)
            for(int idx2: v2)
                min_diff = min(min_diff, abs(idx1-idx2));
        
        return min_diff;
    }
};