class Solution {
public:
    bool isArmstrong(int n) {
        
        int temp = n;
        int pw = log10(n)+1;
        int sum = 0;
        
        while(n)
        {
            sum += (int)pow(n%10,pw);
            n/=10;
        }
        return sum==temp;        
    }
};