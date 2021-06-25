class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &x:nums){
            x = x*x;
        }
        sort(begin(nums),end(nums));
        return nums;
    }
};