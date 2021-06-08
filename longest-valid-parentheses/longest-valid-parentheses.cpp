class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stack;
        int dp[s.size()+1];
        dp[0] = 0;
        int ans = 0;
        for(int i=1;i<=s.size();i++){
            if(s[i-1]=='('){
                dp[i] = 0;
                stack.push(i);
            }else if(s[i-1]==')'){
                if(stack.empty()){
                    dp[i]=0;
                }else{
                    int j = stack.top(); stack.pop();
                    dp[i] = i-j+1 + dp[j-1];
                }
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};