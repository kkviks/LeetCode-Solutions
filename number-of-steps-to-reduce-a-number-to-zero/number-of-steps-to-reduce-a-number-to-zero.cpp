class Solution {
public:
    int numberOfSteps (int n) {
        int count = 0;
        while(n!=0){
            if(~n&1){
                n>>=1;
            }
            else n--;
            count++;
        }
        return count;
    }
};