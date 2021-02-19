class Solution {
public:
    int subtractProductAndSum(int n) {
        int p = 1, s = 0;
        while(n){
            int lastDigit = n%10;
            p *= lastDigit;
            s += lastDigit;
            n /= 10;
        }
        int ans = p-s;
        return ans;
    }
};