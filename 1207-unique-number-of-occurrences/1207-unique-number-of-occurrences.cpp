class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int a[2001] = {0};
        for(int x:arr){
            a[x+1000]++;
        }
        unordered_set<int> set;
        for(int i=0;i<2001;i++){
            if(a[i]==0)continue;
            if(set.count(a[i]))
                return false;
            else set.insert(a[i]);
        }
        return true;
    }
};