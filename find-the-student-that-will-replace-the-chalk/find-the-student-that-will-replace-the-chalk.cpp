class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        long sum = 0;
        
        for(int x: chalk){
            sum += x;
        }
        
        k = k % sum;
        
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]>k){
                return i;
            }
            
            k -= chalk[i];
        }
        
        return -1;
    }
};