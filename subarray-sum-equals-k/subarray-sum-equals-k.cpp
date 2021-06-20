class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int pre_sum = 0;
        unordered_map<int,int> m;
        m[0]=1;
        
        int ans = 0;
        
        for(int i=0;i<nums.size();i++){
            pre_sum += nums[i];
            if(m.count(pre_sum - k)){
                ans += m[pre_sum-k];
            }
            m[pre_sum]++;
        }
        
        return ans;
    }
};