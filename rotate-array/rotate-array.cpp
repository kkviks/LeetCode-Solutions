class Solution {
private:
    void rotate(vector<int> &v, int i,int j){
        while(i<j){
            swap(v[i],v[j]);
            i++,j--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        int d= n-k;
        rotate(nums,0,d-1);
        rotate(nums,d,n-1);
        rotate(nums,0,n-1);
    }
};