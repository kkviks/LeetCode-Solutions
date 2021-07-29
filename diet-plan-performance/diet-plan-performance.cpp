class Solution {
public:
    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        
        int window = 0;
        
        for(int i=0;i<k;i++)
        {
            window += calories[i];
        }
        
        int points = 0;
        
        if(window<lower)points=-1;
        else if(window>upper)points=1;
        
        for(int i=k;i<calories.size();i++)
        {
            window = window + calories[i] - calories[i-k];
            if(window < lower)
            {
                points--;
            }else if(window > upper)
            {
                points++;
            }
        }
        
        return points;
    }
};