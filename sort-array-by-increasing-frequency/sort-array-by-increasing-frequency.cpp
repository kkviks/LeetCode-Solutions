class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        const int N = 201;
        int m[N] = {0};
        
        for(int num:nums){
            m[num+100]++;
        }
        
        auto comp = [m](int a,int b){
            a += 100;
            b += 100;
            if(m[a]==m[b])return a>b;
            return m[a]<m[b];
        };
        
        sort(begin(nums),end(nums),comp);
        
        return nums;
    }
};