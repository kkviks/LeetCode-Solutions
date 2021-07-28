class Solution {
public:
    int countElements(vector<int>& arr) {
       int count[1001] = {0};
        
        for(int x:arr)
        {
            count[x]++;
        }
        
        int ans = 0;
        for(int i=0;i<1000;i++)
        {
            if(count[i]!=0 and count[i+1]!=0)
            {
                ans += count[i];
            }
        }
        
        return ans;
    }
};