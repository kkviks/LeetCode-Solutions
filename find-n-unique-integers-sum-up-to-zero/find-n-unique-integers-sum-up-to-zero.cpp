class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> v(n,0);
        int x = 1;
        int i=0, j= n-1;
        while(i<j){
            v[i] += x;
            v[j] -= x;
            x++; i++; j--;
        }
        return v;
    }
};