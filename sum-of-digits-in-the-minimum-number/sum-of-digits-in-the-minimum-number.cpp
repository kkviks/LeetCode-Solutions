class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int e = INT_MAX;
        
        for(int x: nums)
        {
             e = min(e,x);
        }
        
        int sum =0 ;
        while(e)
        {
            sum += e%10;
            e/=10;
        }
        
        return sum%2==1?0:1;
    }
};