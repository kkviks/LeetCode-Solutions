class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> count;
        pair<int,int> ans = {INT_MIN,0};
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                int next_value = nums[i+1];
                count[next_value]++;
                if(count[next_value]>ans.second){
                    ans.second = count[next_value];
                    ans.first = next_value;
                }
            }
        }
        return ans.first;
    }
};