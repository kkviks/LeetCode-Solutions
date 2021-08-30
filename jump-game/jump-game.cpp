class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int n = a.size();
        if(a[0]==0 and n!=1){
            return false;
        }
        
        int reach = a[0];
        int curr = a[0];
        
        for(int i=1;i<n;i++){
            curr--;
            reach = max(reach-1,a[i]);
            
            if(curr==0){
                curr = reach;
            }
            
            if(curr==0 and i!=n-1){
                return false;
            }
        }
        
        return true;
        
    }
};