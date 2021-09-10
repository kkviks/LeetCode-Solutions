class Solution {
public:
    vector<int> longestCommonSubsequence(vector<vector<int>>& arrays) {
        vector<int> ans = f(arrays[0],arrays[1]);
        
        for(int i=2;i<arrays.size();i++){
            ans = f(ans,arrays[i]);
        }
        
        return ans;
    }
    
    vector<int> f(vector<int> &a, vector<int> &b){
        int i = 0;
        int j = 0;
        
        vector<int> lcs;
        
        while(i<a.size() and j<b.size()){
            if(a[i]==b[j]){
                lcs.push_back(a[i]);
                i++; j++;
            }else if(a[i]<b[j]){
                i++;
            }else{
                j++;
            }
        }
        
        return lcs;
    }
};