class Solution {
public:
    int findLucky(vector<int>& arr) {
        int count[501] =  {0};
        
        for(int x:arr)
        {
            count[x]++;
        }
        
        for(int i=500;i>=1;i--)
        {
            if(count[i]==i)
                return i;
        }
        
        return -1;
    }
};