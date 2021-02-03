class Solution {
public:
    int countPrimes(int n) {
        vector<bool> is_prime(n+1,true);
        is_prime[0] = is_prime[1] = false;
        
        for(int i=2; 1LL*i*i<=n ;i++){
            if(is_prime[i]){
                for(int p = i*i; p<=n; p+=i){
                    is_prime[p] = false; 
                }
            }
        }
        
        int count = 0;
        for(int i=0;i<n;i++){
            if(is_prime[i])count++;
        }
        return count;
    }
};