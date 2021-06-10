class Solution {
public:
    int distinctSubseqII(string s) {
        int n = s.size();
        int V[26][n+1];
        memset(V,0,sizeof V);
        int dp[n+1];
        dp[0] = 0;
        
        for(int i=1;i<=n;i++){
            char X = s[i-1];
            int sum = 0;
            for(int j=0;j<26;j++){
                if(j+'a'==X)V[j][i] = 1+dp[i-1];
                else V[j][i] = V[j][i-1];
                sum += V[j][i] % ( (int)1e9 + 7);
                sum %= (int)1e9 + 7;
            }
            dp[i] = sum;
        }
        
        return dp[n];
    }
};