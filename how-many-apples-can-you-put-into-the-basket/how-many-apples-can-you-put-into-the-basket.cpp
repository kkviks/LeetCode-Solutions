class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        sort(begin(arr),end(arr));
        
        int size = 5000;
        int cnt = 0;
        
        for(int i=0;i<arr.size();i++)
        {
            size -= arr[i];
            if(size<0)
                break;
            cnt++;
        }
        
        return cnt;
    }
};