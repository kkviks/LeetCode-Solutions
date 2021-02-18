class Solution {
public:
    int repeatedNTimes(vector<int> &A) {
        unordered_map<int,int> m;
        int n = A.size();
        for(int i=0;i<n;i++){
            if(++m[A[i]]==n/2)return A[i];
        }
        return -1;
    }
};