class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int max_units = 0;
        
        sort(boxTypes.begin(),boxTypes.end(), [&](vector<int> a,vector<int> b){
            if(b[1]==a[1])
                return a[0]>b[0];
            return a[1]>b[1];
        });
        
        for(auto v:boxTypes)
        {
            max_units += min(truckSize,v[0])*v[1];
            truckSize -= v[0];
            
            if(truckSize<=0)
                break;
        }
        
        return max_units;
    }
};