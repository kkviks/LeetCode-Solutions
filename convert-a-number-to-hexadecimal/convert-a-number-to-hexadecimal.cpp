class Solution {
public:
    string toHex(int num) {
        if(num==0)return "0";
        
        char dic[]={'0','1','2','3','4','5','6','7','8','9',
                     'a','b','c','d','e','f'};
        unsigned int n = num;
        string hex="";
        
        while(n!=0){
            hex = dic[(n&15)]+hex;
            n >>= 4;
        }
        return hex;
    }
};