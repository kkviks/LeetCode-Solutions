class Solution {
public:
    int findDuplicate(vector<int> const & nums) {
        vector<bool> visited((int)1e5+1, false);
        for(int x:nums){
            if(visited[x])return x;
            visited[x]=true;
        }
        return -1;
    }
};