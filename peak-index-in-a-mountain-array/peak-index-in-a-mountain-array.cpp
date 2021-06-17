class Solution {
private:
    int binarySearch(vector<int> &a, int l, int r){
        int mid = -1;
        while(l<=r){
            mid = l + (r-l)/2;
            if((mid==0 and a[0]>a[1])
              or (mid==a.size()-1 and a[mid]>a[mid-1])
              or (a[mid]>a[mid+1] and a[mid]>a[mid-1]))return mid;
            else if(a[mid+1]>a[mid])l = mid+1;
            else r = mid-1;
        }
        return -1;
    }
    
public:
    int peakIndexInMountainArray(vector<int>& a) {
        return binarySearch(a,0,a.size()-1);
    }
};