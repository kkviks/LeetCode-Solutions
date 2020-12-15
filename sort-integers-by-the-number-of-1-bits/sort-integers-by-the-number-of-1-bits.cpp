class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(), [&](int i, int j){
                 bitset<32> bset1(i), bset2(j);
            if(bset1.count()==bset2.count())return i<=j;
                 return bset1.count() < bset2.count();});
        return arr;    
    }
};
