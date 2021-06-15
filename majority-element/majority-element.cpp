class Solution {
public:
    int majorityElement(vector<int>& a) {
        int element = a[0], count = 1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]==element)count++;
            else count--;
            if(count==0){
                element = a[i];
                count++;
            }
        }
        return element;
    }
};