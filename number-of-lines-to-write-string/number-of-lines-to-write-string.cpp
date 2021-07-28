class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        int lines = 1;
        int curr_width = 0;
        
        for(char ch:s)
        {
            int w = widths[ch-'a'];
            
            if(curr_width+w<=100)
            {
                curr_width += w;
            }
            else
            {
                lines++;
                curr_width = w;
            }
        }
        
        return {lines,curr_width};
    }
};