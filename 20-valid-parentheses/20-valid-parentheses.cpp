class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for(char ch:s){
            if(ch == '(' or ch=='[' or ch=='{'){
                stack.push(ch);
            }else {
                if(stack.empty())
                    return false;
                char top = stack.top();
                if(!matching(top, ch))return false;
                stack.pop();
            }
        }
        return stack.empty();
    }
    
    bool matching (char left, char right){
        bool res = left=='(' and right==')';
        res |= left=='{' and right=='}';
        res |= left=='[' and right==']';
        return res;
    }
};