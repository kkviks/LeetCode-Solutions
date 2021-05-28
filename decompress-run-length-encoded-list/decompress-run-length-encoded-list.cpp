class Solution {
public:
    vector<int> decompressRLElist(vector<int>& v) {
        vector<int> ans;
        for(int i=0;i<v.size();i+=2){
            for(int j=0;j<v[i];j++){
                ans.push_back(v[i+1]);
            }
        }
        return ans;
    }
};