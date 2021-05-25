class Solution {
public:
    int maxArea(vector<int>& height) {
        int myMaxArea = 0;
        
        auto area = [&](int &i, int &j){
            return min(height[i],height[j])*(j-i);
        };
        
        int i = 0, j = height.size()-1;
        
        while(i<j){
            myMaxArea = max(myMaxArea, area(i,j));
            if(height[i]<height[j]){
                i++;
            }else if(height[j]<height[i]){
                j--;
            }else{
                i++;
            }
        }
        
        return myMaxArea;
    }
};