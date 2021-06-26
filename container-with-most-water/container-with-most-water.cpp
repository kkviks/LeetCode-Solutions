class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = INT_MIN;
        int i = 0, j = height.size()-1;
        
        while(i<=j){
            int area = min(height[i],height[j])*(j-i);
            max_area = max(max_area, area);
            
            if(height[i]<=height[j])
                i++;
            else
                j--;
        } 
        
        return max_area;
    }
};