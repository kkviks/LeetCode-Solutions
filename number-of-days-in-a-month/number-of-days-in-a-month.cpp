class Solution {
public:
    int numberOfDays(int Y, int M) {
        unordered_set<int> m30({4,6,9,11});
        
        if(M==2)
        {
            if(Y%400==0 or (Y%4==0 and Y%100!=0))
                return 29;
            else
                return 28;
        }
        
        if(m30.count(M))
            return 30;
        
        return 31;
        
    }
};