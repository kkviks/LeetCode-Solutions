class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> ans;
        
        for(int i=left; i<=right; i++)
        {
            if(check(i))
                ans.push_back(i);
        }
        return ans;
    }
    
    bool check(int n){
        int t = n;
        while(n)
        {
            int digit = n%10;
            if(digit==0 or t%digit!=0)
                return false;
            n/=10;
        }
        return true;
    }
};