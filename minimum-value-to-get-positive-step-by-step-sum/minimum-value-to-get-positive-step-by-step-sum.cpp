class Solution {
public:
    int minStartValue(vector<int>& nums) {
        partial_sum(begin(nums),end(nums),begin(nums));
        int x = *min_element(nums.begin(),nums.end());
        if(x<0)return -x+1;
        return 1;
    }
};
