class Solution {
    /* Naive Approach: Time: O(n*n), Aux Space O(1); */
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& v) {        
        vector<int> ans(v.size());
        
        for(int i=0;i<v.size();i++){
            int count = 0;
            for(int j=0;j<v.size();j++){
                if(v[j]<v[i])
                    count++;
            }
            ans[i] = count;
        }
        
        return ans;
    }
};