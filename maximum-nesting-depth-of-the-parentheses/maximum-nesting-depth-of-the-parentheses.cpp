class Solution {
public:
    int maxDepth(string s) {
        int maxSize = 0, currSize = 0;
        
        for(char ch: s){
            if(ch=='('){
                currSize++;
                maxSize = max(maxSize,currSize);
            }
            else if(ch==')'){
                currSize--;
            }
        }
        
        return maxSize;
    }
};
