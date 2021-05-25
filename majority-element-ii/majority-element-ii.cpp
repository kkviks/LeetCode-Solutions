class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Bruteforce solution
        int n = nums.size();
        unordered_set<int> set;
        for(int i=0;i<n;i++){
            int x = nums[i];
            if(set.count(x))continue;
            int freq = 0;
            for(int j=0;j<n;j++){
                if(nums[j]==x)freq++;
            }
            if(freq>n/3)set.insert(x);
        }
        vector<int> v(set.begin(),set.end());
        return v;
    }
};