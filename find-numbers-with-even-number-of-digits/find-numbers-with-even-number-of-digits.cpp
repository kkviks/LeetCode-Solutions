class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int &x:nums){
            int digits = (int)log10(x)+1;
            if(digits%2==0)
                count++;
        }
        return count;
    }
};