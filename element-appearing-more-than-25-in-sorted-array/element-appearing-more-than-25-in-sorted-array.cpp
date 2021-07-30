class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        double threshold = arr.size()/4.0;
        int frq = 1;
        int num = arr[0];
        
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1]){
                frq++;
            }else{
                if(frq>threshold){
                    return num;
                }
                frq = 1;
                num = arr[i];
            }
        }
        
        return num;
    }
};