class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int want = INT_MAX;
        for(int i=0;i<n-1;i++){
            want = min(want, arr[i+1]-arr[i]);
        }
        vector<vector<int>> res;
        for(int i=0;i<n-1;i++){
            int diff = arr[i+1]-arr[i];
            if(diff == want){
                res.push_back({arr[i], arr[i+1]});
            }
        }
        return res;
    }
};