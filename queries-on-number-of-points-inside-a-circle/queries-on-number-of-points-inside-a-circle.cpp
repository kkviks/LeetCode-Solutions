class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& circles) {
        vector<int> ans(circles.size());
        
        int idx = 0;
        for(auto v:circles){
            int xj = v[0];
            int yj = v[1];
            int r = v[2];
            
            int count = 0;
            
            for(auto p:points){
                int x = p[0];
                int y = p[1];
                
                if((x-xj)*(x-xj)+(y-yj)*(y-yj)<= r*r){
                    count++;
                }
            }
            
            ans[idx++] = count;
        }
        
        return ans;
    }
};