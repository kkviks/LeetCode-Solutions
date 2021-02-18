class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int f=-1,s=-1;
        for(int curr:nums){
            if(curr>f and curr>s){
                s = f;
                f = curr;
            }
            else if(curr>s){
                s = curr;
            }
        }
        return (f-1)*(s-1);
    }
};