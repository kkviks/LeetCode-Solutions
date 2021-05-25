class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int e1 = INT_MIN, e2 = INT_MIN;
        int c1 = 0, c2 = 0;
        
        for(int i=0;i<nums.size();i++){
            if(c1==0 and nums[i]!=e2){
                e1 = nums[i];
            }
            if(c2==0 and nums[i]!=e1){
                e2 = nums[i];
            }
            if(nums[i]==e1)c1++;
            if(nums[i]==e2)c2++;
            if(nums[i]!=e1 and nums[i]!=e2)c1--,c2--;
        }
        
        c1 = c2 = 0;
        for(int i=0;i<nums.size();i++){
            if(e1==nums[i])c1++;
            if(e2==nums[i])c2++;
        }
        
        vector<int> v;
        if(c1>nums.size()/3)v.push_back(e1);
        if(c2>nums.size()/3)v.push_back(e2);
        return v;
        
    }
};