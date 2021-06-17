class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        int n = a.size();
        
        if(n==0)return {-1,-1};
        
        int l=0, r= n-1;
        while(l<=r){
           int mid = l+(r-l)/2;
            if(a[mid]==target and (mid==0 or a[mid-1]!=target)){
                l = mid;
                break;
            }
            else if(target<=a[mid])r=mid-1;
            else l = mid+1;
        }
        
        int leftIdx = l<n and a[l]==target?l:-1;
        
        if(leftIdx==-1)return {-1,-1};
        
        l = 0, r = n-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]==target and (mid==n-1 or a[mid+1]!=target)){
                l = mid;
                break;
            }
            else if(target>=a[mid])l=mid+1;
            else r = mid-1;
        }
        
        int rightIdx = l<n and a[l]==target?l:-1;
        
        return {leftIdx, rightIdx};
    }
};