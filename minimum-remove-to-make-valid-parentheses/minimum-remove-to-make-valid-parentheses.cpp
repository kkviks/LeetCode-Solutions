class Solution {
public:
    string minRemoveToMakeValid(string s) {
        unordered_set<int> removeIdx;
        
        stack<int> stack;
        for(int i=0;i<s.size();i++){
            char ch = s[i];
            if(ch=='(')stack.push(i);
            else if(ch==')'){
                if(stack.empty())removeIdx.insert(i);
                else stack.pop();
            }else continue;
        }
        
        while(stack.size()){
            removeIdx.insert(stack.top());
            stack.pop();
        }
        
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(removeIdx.count(i)==0){
                ans += s[i];
            }
        }
        
        return ans;
    }
};