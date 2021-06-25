class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int,int>> a(nums1.size()), b(nums2.size());
        
        for(int i=0;i<nums1.size();i++){
            a[i] = {nums1[i],i};
            b[i] = {nums2[i],i};
        }
        
        sort(begin(a),end(a));
        sort(begin(b),end(b));
        
        for(int i=0;i<nums1.size();i++){
            nums1[a[i].second] = b[i].second; 
        }
        
        return nums1;
    }
};