class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int row = 0; row < image.size(); ++row)
        {
            int i = 0, j = image[row].size()-1;
            while(i<=j)
            {
                swap(image[row][i], image[row][j]);
                image[row][i] = 1-image[row][i];
                if(i!=j)image[row][j] = 1-image[row][j];
                i++; j--;
            }
        }
        
        return image;
    }
};