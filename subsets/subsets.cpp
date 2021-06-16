class Solution {
public:
    vector<vector<int>> subsets(vector<int>& a) {
        int n = a.size();
        int m = (1<<n)-1;
        
        vector<vector<int>> ans;
        
        for(int i=0;i<=m;i++){
            
            vector<int> temp;
            
            for(int j=0;j<n;j++){
                if(i&(1<<j))temp.push_back(a[n-1-j]);
            }
            
            if(temp.size())ans.push_back(temp);
        }
        
        ans.push_back({});
        return ans;
    }
};