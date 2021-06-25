class Solution {
public:
    int largestUniqueNumber(vector<int>& a) {
        vector<int> lookup(1001,0);
        
        for(int x:a){
            lookup[x]++;
        }
        
        for(int i=lookup.size()-1;i>=0;i--){
            if(lookup[i]==1)
                return i;
        }
        
        return -1;
    }
};