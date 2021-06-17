class Solution {
private:
    int indexOfMin(vector<int> &a){
        int l = 0, n = a.size(), r = n-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(a[mid]>a[r])l = mid+1;
            else r = mid;
        }
        return l;
    }
    
    int binarySearch(vector<int> &a,int l, int r, int x){
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]==x)return mid;
            else if(x>a[mid])l = mid+1;
            else r = mid-1;
        }
        return -1;
    }
public:
    int search(vector<int>& a, int target) {
        int min_idx = indexOfMin(a);
        int n = a.size();
        if(target>a[n-1]){
            return binarySearch(a,0,min_idx-1,target);
        }
        return binarySearch(a,min_idx,n-1,target);
    }
};