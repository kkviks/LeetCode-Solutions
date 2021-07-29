class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int odd_count = 0;
        
        for(int i=0;i<arr.size() and i<3;i++)
        {
            if(arr[i]&1)
                odd_count++;
        }
        
        if(odd_count==3)
            return true;
        
        for(int i=3;i<arr.size();i++)
        {
            if(arr[i]&1)
                odd_count++;
            if(arr[i-3]&1)
                odd_count--;
            
            if(odd_count==3)
                return true;
        }
        
        return false;
    }
};