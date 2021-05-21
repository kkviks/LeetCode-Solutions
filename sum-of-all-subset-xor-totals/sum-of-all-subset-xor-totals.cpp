class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int xorSum = 0;
        int ul = (1<<nums.size())-1;
        for(int i=0;i<=ul;i++){
            int xorAll = 0;
            for(int j=0,mask=1;j<12;j++,mask=mask<<1){
                int rIdx = i & mask;
                if(rIdx!=0)xorAll=xorAll^nums[j];
            }
            xorSum += xorAll;
        }
        return xorSum;
    }
};