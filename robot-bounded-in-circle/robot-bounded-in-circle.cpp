class Solution {
    struct point{
        int x, y;
        point(int a, int b)
        {
            x = a;
            y = b;
        }
        
        vector<int> dx = {0,1,0,-1}; // N, E, S, W
        vector<int> dy = {1,0,-1,0};
    };
public:
    bool isRobotBounded(string instructions) {
        
        int idx = 0; // Intially facing north;
        point curr(0,0);
        
        for(char ch:instructions)
        {
            if(ch=='L')
                idx = (4+idx-1)%4;
            else if(ch=='R')
                idx = (idx+1)%4;
            else if(ch=='G')
            {
                curr.x = curr.x + curr.dx[idx];
                curr.y = curr.y + curr.dy[idx];
            }
        }
        
        return (curr.x==0 and curr.y==0) or idx!=0;
    }
};