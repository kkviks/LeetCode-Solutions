class Solution {
public:
    bool confusingNumber(int n) {
        unordered_map<int,int> m{
            {0,0},
            {1,1},
            {6,9},
            {8,8},
            {9,6}
        };
        
        int temp = n;
        int t = 0;
        
        while(n)
        {
           int digit = n%10;
           if(m.count(digit)==0)
           {
               return false;
           }else{
               t = t*10 + m[digit];
           }
          n/=10;
        }
        
        return t!=temp;
    }
};