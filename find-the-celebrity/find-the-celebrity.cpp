/* The knows API is defined for you.
      bool knows(int a, int b); */

class Solution {
public:
    int findCelebrity(int n) {
        unordered_set<int> set;
        for(int i=0;i<n;i++)
            set.insert(i);
        
        for(int i=0;i<n;i++){
            if(set.count(i)==0)continue;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                knows(i,j)?set.erase(i):set.erase(j);
                knows(j,i)?set.erase(j):set.erase(i);
            }
        }
        
        if(set.size()!=1)return -1;
        int celeb = *set.begin();
        
        for(int i=0;i<n;i++){
            if(knows(i,celeb)==0)
                return -1;
        }
        
        return celeb;
    }
};