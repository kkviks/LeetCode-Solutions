class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n==0)return 1;
        
        int ans = 0;
        long p = 1;
        
        while(n>0){
            int r = n % 2;
            int c = 1-r;
            ans += c*p;
            p = p << 1 ;
            n = n >> 1;
        }
        
        return ans;
    }
};