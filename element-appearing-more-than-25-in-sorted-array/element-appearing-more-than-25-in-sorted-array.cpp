class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> candidates = {arr[n/4],arr[n/2],arr[3*n/4]};
        
        for(int candidate: candidates)
        {
            auto lb = lower_bound(arr.begin(),arr.end(),candidate);
            auto ub = upper_bound(arr.begin(),arr.end(), candidate);
            if(4*distance(lb,ub)>n)
                return candidate;
        }
        
        return -1;
    }
};