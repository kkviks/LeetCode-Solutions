class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_h = 0;
        for(int i=0,h=0;i<gain.size();i++){
            h += gain[i];
            max_h = max(h,max_h);
        }
        return max_h;
    }
};