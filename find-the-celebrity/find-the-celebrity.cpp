/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        
        int celebrity = 0;
        int next_person = 1;
        int count = n;
        
        while(count!=1){
            
            if(knows(celebrity,next_person)){
                celebrity = next_person; 
            }
            
            next_person++;
            count--;
            
        }
        
        return isCelebrity(celebrity,n)?celebrity:-1;
    }
    
    bool isCelebrity(int celebrity,int n){
        for(int i=0;i<n;i++){
            if(i==celebrity)continue;
            if(!knows(i,celebrity) or knows(celebrity,i))
                return false;
        }
        return true;
    }
};