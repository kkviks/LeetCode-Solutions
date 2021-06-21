class Solution {
public:
    double myPow(double x, int n) {
        double ans = solve(x,abs(n));
        if(n<0)ans = 1/ans;
        return ans;
    }
    
    double solve(double x, int n){
        if(n==0)return 1;
        
        double res = 1;
        res = solve(x,n/2);
        res = res*res;
        if(n&1)res *= x;
        
        return res;
    }
};