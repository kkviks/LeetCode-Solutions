class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(begin(arr),end(arr));
        int min_diff = INT_MAX;
        
        for(int i=1;i<arr.size();i++){
            min_diff = min(min_diff,arr[i]-arr[i-1]);
        }
        
        int i=1;
        vector<vector<int>> ans;
        while(i<arr.size()){
            if(arr[i]-arr[i-1]==min_diff){
                ans.push_back({arr[i-1],arr[i]});
            }
            i++;
        }
        
        return ans;
    }
};