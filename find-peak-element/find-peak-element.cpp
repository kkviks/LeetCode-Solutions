class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        if(n==0)return -1;
        
        int l = 0, r = n-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(a[mid]>a[mid+1])r = mid;
            else l = mid+1;
        }
        return l;
    }
};