class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0){
            return 0;
        }
        
        int k = 0;
        for(int i=0;i<n;i++){
            nums[k++] = nums[i];
            i = last_idx(i,nums[i],nums);
        }
        
        return k;
    }
    
    int last_idx(int start, int x,vector<int> &a){
        int n = a.size();
        int l=start, r = n-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]==x and (mid==n-1 or a[mid+1]!=x))
                return mid;
            else if(x>=a[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        return -1;
    }
};