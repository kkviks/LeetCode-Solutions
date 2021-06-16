class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool prevBit = n&1;
        n >>= 1;
        while(n){
            bool bit = n&1;
            if(bit==prevBit)return false;
            else prevBit = bit;
            n >>= 1;
        }
        return true;
    }
};