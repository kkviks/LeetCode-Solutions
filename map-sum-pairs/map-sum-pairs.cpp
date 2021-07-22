class MapSum {
private:
    unordered_map<string,int> keys;
private:
    struct TrieNode{
        bool isWord = false;
        int val;
        unordered_map<char,TrieNode*> children;
        
        TrieNode(int val)
        {
            this->val = val;
        }
    };
    
    TrieNode* root;
    
public:
    /** Initialize your data structure here. */
    MapSum() {
        root = new TrieNode(0);
    }
    
    void insert(string key, int val) {
        TrieNode* curr = root;
        
        int valOrig = val;
        
        if(keys.count(key))
            val = val-keys[key];
        
        for(char ch:key)
        {
            if(curr->children.count(ch)==0)
                curr->children[ch] = new TrieNode(0);
            curr = curr->children[ch];
            curr->val += val;
        }
        
        keys[key] = valOrig;
    }
    
    int sum(string prefix) {
        TrieNode* curr = root;
        int sum = 0;
        for(char ch:prefix)
        {
            if(curr->children.count(ch)==0)
                return sum;
            curr = curr->children[ch];
        }
        sum = curr->val;
        return sum;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */