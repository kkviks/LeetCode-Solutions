class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> v(nums1.size()+nums2.size());
        
        int idx = 0;
        
        for(int num: nums1)
            v[idx++] = num;
        
        for(int num: nums2)
            v[idx++] = num;
        
        sort(v.begin(),v.end());
        
        int n = v.size();
        
        if(n%2==0)
        {
            int mid = n/2;
            double median = (v[mid]+v[mid-1])/2.0;
            return median;
        }
        
        return v[n/2];
    }
};