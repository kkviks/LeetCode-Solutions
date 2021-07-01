class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int profit = 0;
        int n = p.size();
        
        int i = 0;
        
        while(i<n)
        {
            int valley = nextValley(i,n,p);
            if(i==n-1)
                return profit;
            int peak = nextPeak(i,n, p);
            
            profit += p[peak]-p[valley];
        }
        
        return profit;
    }
    
    int nextValley(int &i, int n, vector<int> &p)
    {
        while(i+1<=n-1 and p[i]>=p[i+1])i++;
        return i;
    }
    
    int nextPeak(int &i, int n, vector<int> &p)
    {
        while(i+1<=n-1 and p[i]<=p[i+1])i++;
        return i;
    }
};