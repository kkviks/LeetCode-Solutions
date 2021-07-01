class WordDistance {
private:
    unordered_map<string, list<int> > m;
public:
    WordDistance(vector<string>& wordsDict) {
        for(int i=0; i<wordsDict.size(); ++i)
        {
            m[wordsDict[i]].push_front(i);
        }
    }
    
    int shortest(string word1, string word2) {
        
        int ans = INT_MAX;
        
        for(int i:m[word1])
        {
            for(int j:m[word2])
            {
                ans = min(ans,abs(i-j));
            }
        }
        
        return ans;
        
    }
};

/**
 * Your WordDistance object will be instantiated and called as such:
 * WordDistance* obj = new WordDistance(wordsDict);
 * int param_1 = obj->shortest(word1,word2);
 */