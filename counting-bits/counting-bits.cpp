class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> v;
        for(int i=0;i<=num;i++){
            int n = i;
            int count = 0;
            while(n){
                n = n&(n-1);
                count++;
            }
            v.push_back(count);
        }
        return v;
    }
};