class Solution {
public:
    int getLucky(string s, int k) {
        int map[26] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,10,2,3,4,5,6,7,8};
        
        int sum = 0;
        
        for(char ch:s)
        {
            sum += map[ch-'a'];
        }
        
        for(int i=1;i<k;i++)
        {
            sum = sum_of_digits(sum);
        }
        
        return sum;
    }
    
    int sum_of_digits(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += n%10;
            n = n/10;
        }
        
        return sum;
    }
};