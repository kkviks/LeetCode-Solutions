class Solution {
public:
    int minKnightMoves(int x0, int y0) {
        
        if(x0==0 and y0==0)return 0;
        
        const int dx[] = {-2,-1,+1,+2,+2,+1,-1,-2};
        const int dy[] = {+1,+2,+2,+1,-1,-2,-2,-1};
        
        bool visited[605][605];
        memset(visited,0,sizeof visited);
        
        int jumps = 0;
        queue<pair<int,int>> q;
        q.push({0,0});
        
        visited[0+302][0+302] = true;
        
        while(q.size()){
    
            for(int z = q.size()-1; z>=0; z--)
            {
                auto p = q.front(); q.pop();
                int i = p.first, j = p.second;
                
                if(i==x0 and j==y0)
                        return jumps;
                        
                for(int k=0;k<8;k++)
                {
                    int x = i+dx[k];
                    int y = j+dy[k];
                    
                    //assert(abs(x)<=300 and abs(y)<=300);
                    if(visited[x+302][y+302]==false)
                    {
                        if(x==x0 and y==y0)
                            return jumps+1;
                        
                        q.push({x,y});
                        visited[x+302][y+302]=true;
                    }
                }
            }
            
            jumps++;
        }
        
        return jumps;
    }
};