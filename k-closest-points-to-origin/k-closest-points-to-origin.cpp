class Solution {
    class Comp{
        public:
        bool operator()(vector<int> const &a, vector<int> const &b){
            int distA = a[0]*a[0]+a[1]*a[1];
            int distB = b[0]*b[0]+b[1]*b[1];
            return distA <= distB;
        }
    };
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        sort(begin(points), end(points), Comp());
        
        vector<vector<int>> ans(k, vector<int> ());
        
        for(int i=0;i<k;i++){
            ans[i]= {points[i][0], points[i][1]};
        }
        
        return ans;
    }
};