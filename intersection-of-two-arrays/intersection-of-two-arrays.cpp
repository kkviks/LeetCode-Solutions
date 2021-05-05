class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set, set2;
        for(int x: nums1){
            set.insert(x);
        }
        
        for(int x:nums2){
            if(set.count(x))set2.insert(x);
        }
        
        vector<int> v(set2.begin(),set2.end());
        return v;
    }
};