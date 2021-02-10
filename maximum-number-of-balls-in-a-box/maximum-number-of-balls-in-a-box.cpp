class Solution {
private:
    int sumDigits(int n){
        int sum = 0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
public:
    int countBalls(int lowLimit, int highLimit) {
        int a[46] = {0};
        int ans = -1;
        for(int curr = lowLimit; curr<=highLimit; curr++){
            int sod = sumDigits(curr);
            a[sod]++;
            ans = max(ans,a[sod]);
        }
        return ans;
    }
};