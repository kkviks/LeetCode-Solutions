class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(auto &ch: str){
            if(ch=='(' or ch=='[' or ch=='{')s.push(ch);
            else{
                if(s.empty())return false;
                char top = s.top();
                if(ch==')' and top!='(')return false;
                else if(ch==']' and top!='[')return false;
                else if(ch=='}' and top!='{')return false;
                else s.pop();
            }
        }
        return s.empty();
    }
};
