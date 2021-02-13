class Solution {
public:
    int maxDepth(string s) {
        int max_depth = INT_MIN;
        int depth = 0;
        for(char ch:s){
            if(ch=='(')depth++;
            else if(ch==')')depth--;
            else;
            max_depth = max(max_depth,depth);
        }
        max_depth = max(max_depth,depth);
        return max_depth;
    }
};