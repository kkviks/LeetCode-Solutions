class RandomizedSet {
private:
    vector<int> a;
    unordered_map<int,int> m;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        bool wasPresent = m.count(val)==1;
        if(wasPresent==false)
        {
            int idx = a.size();
            m[val] = idx;
            a.push_back(val);
        }
        return !wasPresent;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        bool wasPresent = m.count(val)==1;
        if(wasPresent==true)
        {
            int idx = m[val];
            m[a[a.size()-1]] = idx;
            swap(a[a.size()-1],a[idx]);
            a.pop_back();
            m.erase(val);
        }
        return wasPresent;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int idx = rand()%(a.size());
        return a[idx];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */