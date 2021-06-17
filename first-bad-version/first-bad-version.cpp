// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n==0)return n;
        
        int l = 1, r = n;
        while(l<r){
            int mid = l+(r-l)/2;
            if(isBadVersion(mid))r = mid;
            else l = mid+1;
        }
        
        if(isBadVersion(l))return l;
        return -1;
    }
};