class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        
        int l = 0, n = a.size(), r = n;
        
        if(n==1)
            return a[0];
        
        while(l<r){
            
            int mid=l+(r-l)/2;
            
            if((mid==0 and a[mid+1]!=a[mid]) 
              or (mid==n-1 and a[mid-1]!=a[mid]))
                return a[mid];
            
            if(a[mid-1]!=a[mid] and a[mid+1]!=a[mid])
                return a[mid];
            
            int startIdx = mid;
            if(a[mid-1]==a[mid])
                startIdx = mid-1;
            
            if(startIdx % 2 ==1)
                r = mid;
            else
                l = mid;
        }
        
        return -1;
    }
};