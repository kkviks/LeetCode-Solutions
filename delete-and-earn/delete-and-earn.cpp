class Solution {
public:
    int deleteAndEarn(vector<int>& a) {
        
        int n = a.size();
        int maxNum = INT_MIN;
        
        const int N = 2e4+1;
        int f[N];
        memset(f,0,sizeof f);
        
        for(int x:a){
            f[x]++;
            maxNum = max(maxNum, x);
        }
        
        int dp[maxNum+1];
        dp[0] = 0;
        dp[1] = 1*f[1];
        
        for(int i=2;i<=maxNum; ++i){
            dp[i] = max(i*f[i]+dp[i-2], dp[i-1]);
        }
        
        return dp[maxNum];
    }
};

//[0,0,2,3,1]