class Solution {
private:
    int f(int n){
        int sum = 0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
public:
    int addDigits(int n) {
        while(n%10!=n){
            n = f(n);
        }
        return n;
    }
};