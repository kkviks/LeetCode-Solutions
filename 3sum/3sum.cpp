class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
        
        int n = a.size();
        if(n<=2)return ans;
        
        sort(a.begin(),a.end());
        
        for(int k=0;k<n-2;k++){
            
            if(k>=1 and a[k-1]==a[k])continue;
            
            int i = k+1, j = n-1;
            int x = -a[k];
            while(i<j){
                if(a[i]+a[j]==x){
                    if(ans.size() and 
                       ans.back()[0] == a[k] and ans.back()[1]==a[i] and ans.back()[2]==a[j]){
                        i++, j--;
                        continue;
                    }
                    ans.push_back({a[k],a[i],a[j]});
                    i++, j--;
                }else if(a[i]+a[j]>x)j--;
                else i++;
            }
        }
        
        return ans;
        
    }
};