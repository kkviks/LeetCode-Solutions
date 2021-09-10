class Solution {
public:
    vector<int> longestCommonSubsequence(vector<vector<int>>& arrays) {
        int count[101] = {0};
        
        for(auto &array: arrays){
            for(int &num: array){
                count[num]++;
            }
        }
        
        vector<int> ans;
        for(int i=0;i<101;i++){
            if(count[i]==arrays.size()){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};