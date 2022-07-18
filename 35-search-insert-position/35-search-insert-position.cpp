class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        if(target < a.front())return 0;
        if(target > a.back())return a.size();
        
        int l = 0, h = a.size();
        int mid = -1, ans = a.size();
        while(l<=h){
            mid = l + (h-l)/2;
            if(a[mid]==target)return ans=mid;
            if(target>a[mid]){
                ans=mid+1;
                l = mid+1;
            }else{
                ans = mid;
                h = mid-1;
            }
        }
        
        return ans;
    }
};