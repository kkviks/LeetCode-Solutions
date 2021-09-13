class Solution {
public:
    int minOperations(int n) {
        int curr = 1;
        
        int ans = 0;
        while(curr<=n){
            ans += n-curr;
            curr+=2;
        }
        
        return ans;
    }
};