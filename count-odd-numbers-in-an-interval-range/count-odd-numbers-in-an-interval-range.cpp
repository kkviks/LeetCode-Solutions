class Solution {
public:
    int countOdds(int low, int high) {
        
        if(low==high){
            if(low&1)
                return 1;
            else
                return 0;
        }
        
        if(low%2==0)
            low++;
        
        int n = (high-low)/2 + 1;
        return n;
    }
};