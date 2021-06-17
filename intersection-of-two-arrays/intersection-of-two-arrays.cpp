class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> setA, setB, setC;
        
        for(int x:nums1)setA.insert(x);
        for(int x:nums2)setB.insert(x);
        
        for(int x:setA){
            if(setB.count(x))setC.insert(x);
        }
        
        vector<int> ans(setC.begin(), setC.end());
        return ans;
    }
};