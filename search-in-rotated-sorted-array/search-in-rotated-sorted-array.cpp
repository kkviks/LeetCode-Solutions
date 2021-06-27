class Solution {
public:
    int search(vector<int>& a, int target) {
        
        int n = a.size();
        int pivot;
        
        int l = 0, r = n;
        
        while(l<r){
            int mid = l+(r-l)/2;
            
            if(a[mid]>a[n-1])
                l=mid+1;
            else
                r=mid;
        }
        
        pivot = l;
        
        if(target>a[n-1])
            l=0, r = pivot-1;
        else
            l = pivot, r = n-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]==target)
                return mid;
            if(target>a[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        
        return -1;
        
    }
};