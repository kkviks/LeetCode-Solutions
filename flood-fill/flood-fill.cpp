class Solution {
private:
       vector<int> dx = {-1, 0, +1, 0};
       vector<int> dy = {0, -1, 0, +1};
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int ch = image[sr][sc];
        
        dfs(image,sr, sc, ch, newColor);
        return image;
    }
    
    void dfs(vector<vector<int>>& image, int i, int j, int ch, int color){
        if(i<0 or j<0 or i>=image.size() or j>=image[0].size())return;
        
        if(image[i][j]==color or image[i][j]!=ch)return;
        
        image[i][j] = color;
        
        for(int k=0; k <4; k++){
            dfs(image, i+dx[k], j+dy[k], ch, color);
        }
        
    }
};