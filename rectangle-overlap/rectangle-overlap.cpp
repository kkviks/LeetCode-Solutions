class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        int X1 = rec1[0], x1 = rec2[0];
        int X2 = rec1[2], x2 = rec2[2];
        int Y1 = rec1[1], y1 = rec2[1];
        int Y2 = rec1[3], y2 = rec2[3];
        
        if(max(x1,x2) <= min(X1,X2))return false;
        if(min(x1,x2) >= max(X1,X2))return false;
        
        if(max(y1,y2) <= min(Y1,Y2))return false;
        if(min(y1,y2) >= max(Y1,Y2))return false;
        
        return true;
    }
};