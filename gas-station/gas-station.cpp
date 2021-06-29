class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int netPetrol = 0;
        int n = gas.size();
        
        for(int i=0;i<gas.size();i++)
        {
            netPetrol += gas[i]-cost[i];
        }
        
        if(netPetrol<0)
            return -1;
        
        int startIdx = 0;
        netPetrol = -1;
        
        for(int i=0;i<gas.size();i++)
        {
            if(netPetrol<0)
            {
                netPetrol = 0;
                startIdx = i;
            }
            
            netPetrol += (gas[i]-cost[i]);
        }
        
        return startIdx;
    }
};