class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        
        int n = a.size();
        if(n==0)
            return {-1,-1};
        
        int left = -1, right = -1;
        
        int l = 0, r = n-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            
            if(a[mid]==target and (mid==0 or a[mid-1]!=target))
            {
                left = mid;
                break;
            }
            else if(target<=a[mid])
            {
                r = mid-1;
            }else
            {
                l = mid+1;
            }
        }
        
        if(left==-1)
            return {-1,-1};

        l = 0, r = n-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            
            if(a[mid]==target and (mid==n-1 or a[mid+1]!=target))
            {
                right = mid;
                break;
            }
            else if(target>=a[mid])
            {
                l = mid+1;
            }else
            {
                r = mid-1;
            }
        }
        
        return {left,right};
        
    }
};