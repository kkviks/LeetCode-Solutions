/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
​
// @lc code=start
#include<bits/stdc++.h>
using namespace std;
​
class Solution {
public:
    vector<int> twoSum(vector<int> nums, int target) {
        vector<int> v;
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.count(target-nums[i])==1){
                v.push_back(i);
                v.push_back(m[target-nums[i]]);
                break;
            }
            else m[nums[i]]=i;
        }
        return v;
    }
};
// @lc code=end
​
​
