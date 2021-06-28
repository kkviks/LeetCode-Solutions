class Solution {
public:
    void sortColors(vector<int>& a) {
        
        int left = 0, right = a.size()-1;
        int i = 0;
        
        while(i<=right){
            
            
            if(a[i]==0){
                swap(a[left], a[i]);
                left++; i++;
            }else if(a[i]==2){
                swap(a[i],a[right]);
                right--; 
            }else
                i++;
            
        }
        
    }
};