class Solution {
private:
    void rotate(vector<int>& nums, int i, int j)
    {
        while(i<=j)
        {
            swap(nums[i],nums[j]);
            i++; j--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        k = nums.size()-k;
        rotate(nums,0,k-1);
        rotate(nums,k,nums.size()-1);
        rotate(nums,0, nums.size()-1);
    }
};