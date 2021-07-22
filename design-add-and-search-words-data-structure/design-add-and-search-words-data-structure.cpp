class WordDictionary {
private:
    struct TrieNode{
        bool isWord = false;
        unordered_map<char,TrieNode*> children;
        TrieNode(){}
    };
    
    TrieNode* root;
    
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        root = new TrieNode();
    }
    
    void addWord(string word) {
        TrieNode* curr = root;
        
        for(char ch:word)
        {
            if(curr->children.count(ch)==0)
                curr->children[ch] = new TrieNode();
            curr = curr->children[ch];
        }
        
        curr->isWord = true;
    }
    
    bool search(string word) {
        return search_helper(root,word);
    }
    
    bool search_helper(TrieNode* root, string word)
    {
        TrieNode* curr = root;
        
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            if(ch=='.'){
                for(auto p:curr->children)
                {
                    if(search_helper(p.second, word.substr(i+1)))
                        return true;
                }
                return false;
            }else if(curr->children.count(ch)==0)
                return false;
            else
                curr = curr->children[ch];
        }
        return curr->isWord;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */