class Solution {
private:
    int binarySearch(vector<int> &a,int x)const{
        int l = 0, r = a.size()-1, ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(a[mid]==x)return mid;
            else if(x<a[mid])r = mid-1, ans = mid;
            else l = mid+1;
        }
        if(ans==-1)ans=a.size();
        return ans;
    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
};