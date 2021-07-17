class Solution {
public:
    bool canJump(vector<int>& a) {
        
        int curr = a[0];
        int reach = a[0];
        
        if(curr==0 and a.size()!=1)return false;
        
        for(int i=1;i<a.size();i++)
        {
            curr--;
            reach = max(reach-1,a[i]);
            
            if(curr==0)
            {
                curr = reach;
            }
            
            if(curr<=0 and i!=a.size()-1)
            {
                return false;
            }
        }
        return true;
    }
};