class Solution {
public:
    int search(vector<int>& a, int x) {
        int n = a.size();
        int l = 0, r = n-1;
        
        while(l<r){
            int mid = l+(r-l)/2;
            
            if(a[mid]>a[n-1])
                l = mid+1;
            else
                r = mid;
        }
        
        int pivot = l;
        
        if(x<=a[n-1])
            l = pivot, r=n-1;
        else
            l = 0, r = pivot-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]==x)
                return mid;
            if(x>a[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        
        return -1;
    }
};