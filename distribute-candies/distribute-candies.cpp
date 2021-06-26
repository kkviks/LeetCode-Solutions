class Solution {
public:
    int distributeCandies(vector<int>& a) {
        int n = a.size();
        
        unordered_set<int> set;
        
        for(int &x:a){
            set.insert(x);
        }
        
        return set.size()<=n/2?set.size():n/2;
    }
};
