class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        unordered_map<int,int> m;
        
        for(int i=0;i<arr.size();i++){
            int val = arr[i];
            m[val] = i;
        }
        
        for(auto &v:pieces){
            int sz = v.size();
            if(m.count(v[0])==0)return false;
            int idx = m[v[0]];
            
            arr[idx] *= -1;
            
            for(int i=1;i<sz;i++){
                if(arr[i+idx]!=v[i])return false;
                arr[i+idx] *= -1;
            }
        }
        
        int count = 0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                arr[i] *= -1;
                count++;
            }
        }
        
        return count==arr.size();
    }
};