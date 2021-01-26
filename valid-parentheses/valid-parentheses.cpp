class Solution {
public:
    bool isValid(string st) {
        stack<char> s;
        for(char ch: st){
            if(ch=='(' or ch=='{' or ch == '[')s.push(ch);
            else{
                if(s.empty())return false;
                switch(ch){
                    case ')': 
                        if(s.top()!='(')return false;
                        else s.pop();
                        break;
                    case '}': 
                        if(s.top()!='{')return false;
                        else s.pop();
                        break;
                    case ']': 
                        if(s.top()!='[')return false;
                        else s.pop();
                        break;
                    default: return false;
                    }
                }
            }
            return s.empty();
    }
};
