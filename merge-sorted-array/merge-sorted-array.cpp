class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> v;
        v.reserve(nums1.size());
        
        int i = 0, j = 0, idx = 0;
        
        while( i< m and j<nums2.size())
        {
            if( nums1[i] <= nums2[j]){
                v[idx++] = nums1[i++];
            }
            else
            {
                v[idx++] = nums2[j++];
            }
        }
        
        while(i<m)
        {
            v[idx++] = nums1[i++];
        }
        
        while(j<nums2.size())
        {
            v[idx++] = nums2[j++];
        }
        
        for( i=0;i<nums1.size(); i++)
        {
            nums1[i] = v[i];
        }
        

        v.clear();
        
    }
};