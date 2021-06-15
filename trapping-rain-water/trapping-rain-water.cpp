class Solution {
public:
    int trap(vector<int>& a) {
        if(a.size()==0)return 0;
        int n = a.size(), leftMax[n], rightMax[n];
        int res = INT_MIN;
        
        for(int i=0;i<n;i++){
            res = max(res, a[i]);
            leftMax[i] = res;
        }
        
        res = INT_MIN;
        
        for(int i=n-1;i>=0;i--){
            res = max(res, a[i]);
            rightMax[i] = res;
        }
        
        int ans = 0;
        
        for(int i=0;i<n;i++){
            ans += min(leftMax[i],rightMax[i]) - a[i];
        }
        
        return ans;
    }
};