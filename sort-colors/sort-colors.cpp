class Solution {
public:
    void sortColors(vector<int>& nums) {
        int f[3];
        memset(f,0,sizeof f);
        
        for(int &x:nums)
            f[x]++;
        
        for(int i=0,curr=0; i<3;i++)
        {
            while(f[i]!=0)
            {
                nums[curr++] = i;
                f[i]--;
            }
        }
    }
};