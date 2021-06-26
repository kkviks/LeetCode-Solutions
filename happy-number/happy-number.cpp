class Solution {
public:
    bool isHappy(int n) {
        int temp = n;
        
        unordered_set<int> set;
        set.insert(n);
        
        do{
            int sum = 0;
            int t = n;
            
            set.insert(n);
            
            while(t){
                sum += (t%10)*(t%10);
                t/=10;
            }
            n = sum;
            
        }while(!set.count(n) and n!=1);
        
        return n==1;
    }
};