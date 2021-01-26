class Solution {
    const int MOD = 1e9+7;
private:
    int numberPrimes(int n){
        vector<bool> is_prime(n+1,true);
        is_prime[0] = is_prime[1] = false;
        for(int p = 2; p <= sqrt(n); p++){
            if(is_prime[p]){
                for(int i=(long long)p*p; i<=n; i+=p){
                    is_prime[i] = false;
                }
            }
        }
        int count = 0;
        for(int i=1;i<=n;i++){
            if(is_prime[i])count++;
        }
        return count;
    }
    
    int fact(int n){
        int ans = 1;
        for(int i=2;i<=n;i++){
            ans = ans % MOD;
            ans = (1LL*ans*i) % MOD;
        }
        return ans % MOD;
    }
​
public:
    int numPrimeArrangements(int n) {
        int primeCount = numberPrimes(n);
        int notPrimeCount = n - primeCount;
        
        int ans = fact(primeCount) % MOD;
        ans = ( 1LL*ans * fact(notPrimeCount) ) % MOD;
        
        return ans;
    }
};
