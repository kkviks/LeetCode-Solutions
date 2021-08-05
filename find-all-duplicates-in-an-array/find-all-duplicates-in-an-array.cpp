class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        
        vector<int> ans;
        
        for(int i=0;i<a.size();i++){
            int idx = abs(a[i])-1;
            if(a[idx]<0){
                ans.push_back(idx+1);
            }else a[idx] *= -1;
        }
        
        return ans;
    }
};