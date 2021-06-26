class Solution {
public:
    int trailingZeroes(int n) {
        int z = 0;
        int x = 5;
        
        while(x<=n){
            z += n/x;
            x = x*5;
        }
        
        return z;
    }
};