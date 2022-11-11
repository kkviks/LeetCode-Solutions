class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int x: arr){
            map[x]++;
        }
        unordered_set<int> have_seen;
        for(pair<int,int> p:map){
            if(have_seen.count(p.second)){
                return false;
            }
            have_seen.insert(p.second);
        }
        
        return true;
    }
};