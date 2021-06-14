class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int> e(h.begin(),h.end());
        sort(e.begin(),e.end());
        int count = 0;
        for(int i=0;i<h.size();i++){
            if(h[i]!=e[i])count++;
        }
        return count;
    }
};