class Solution {
public:
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        
        int i=-1, j=-1;
        int idx = 0;
        int min_diff = INT_MAX;
        
        for(string &word: wordsDict)
        {
            if(word==word1)
                i = idx;
            if(word==word2)
                j = idx;
            
            if(i!=-1 and j!=-1)
            {
                min_diff = min(min_diff, abs(i-j));
            }
            
            idx++;
        }
        return min_diff;
    }
};