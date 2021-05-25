class Solution {
private:
    int area(vector<int> &height,int &i, int &j) const{
        return min(height[i],height[j])*(j-i);
    }
public:
    int maxArea(vector<int>& height) {
        int myMaxArea = 0;
        
        int i = 0, j = height.size()-1;
        
        while(i<j){
            myMaxArea = max(myMaxArea, area(height, i,j));
            if(height[i]<=height[j]){
                i++;
            }else if(height[j]<height[i]){
                j--;
            }
        }
        
        return myMaxArea;
    }
};