class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        int i=0;
        int j = a.size()-1;
        while(i<j){
            int sum = a[i] + a[j];
            if(sum<target)i++;
            else if(sum>target)j--;
            else{
                return {i+1,j+1};
            }
        }
        return {};
    }
};
