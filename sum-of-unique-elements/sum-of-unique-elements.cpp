class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int x:nums){
            m[x]++;
        }
        int sum = 0;
        for(auto p:m){
            if(p.second==1)sum+=p.first;
        }
        return sum;
    }
};