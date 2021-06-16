class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int seenOnce = 0, seenTwice = 0;
        for(int x:nums){
            seenOnce = ~seenTwice & (seenOnce^x);
            seenTwice = ~seenOnce & (seenTwice^x);
        }
        return seenOnce;
    }
};