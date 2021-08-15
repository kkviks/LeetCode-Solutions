class Solution {
public:
    int findMin(vector<int>& a) {
        int l = 0, r = a.size();
        a.push_back(a.back());
        
        while(l<r){
            int mid = l+(r-l)/2;
            if(a[mid]>a[r])
                l = mid+1;
            else if(a[mid]<a[r])
                r = mid;
            else
                r = r-1;
        }
        
        return a[r];
    }
};