class Solution {
public:
    int majorityElement(vector<int>& a) {
        int x = a[0];
        int count = 1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]==x)count++;
            else count--;
            if(count==0){
                x = a[i];
                count = 1;
            }
        }
        
        return x;
    }
};