class Solution {
public:
    int smallestCommonElement(vector<vector<int>>& mat) {
        int R = mat.size();
        unordered_map<int,int> m;
        
        for(auto &row: mat){
            for(auto &num: row){
                m[num]++;
            }
        }
        int ans = INT_MAX;
        
        for(auto p:m){
            if(p.second==R){
                ans = min(ans, p.first);
            }
        }
        
        return ans==INT_MAX?-1:ans;
    }
};