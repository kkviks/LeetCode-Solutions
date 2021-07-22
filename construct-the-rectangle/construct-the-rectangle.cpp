class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> ans = {0,0};
        
        int min_diff = INT_MAX;
        
        for(int w=1;w<=area;w++)
        {
            if(area%w==0)
            {
                int l = area/w ;
                if(l>=w)
                {
                    if(l-w<min_diff)
                    {
                        min_diff = l-w;
                        ans = {l,w};
                    }
                }
                else 
                    break;
            }
        }
        
        return ans;
    }
};