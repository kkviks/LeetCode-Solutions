class Solution {
public:
    bool isPowerOfFour(int n) {
        unordered_set<int> set;
        long long x = 1;
        set.insert(x);
        while( 1LL*x < INT_MAX){
            set.insert(x);
            x *= 4;
        }
        return set.count(n);
    }
};