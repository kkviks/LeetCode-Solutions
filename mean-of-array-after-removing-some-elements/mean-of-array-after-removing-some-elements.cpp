class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int x = (n/20);
        
        int t = n-x;
        double sum = 0;
        int count = 0;
        
        sort(arr.begin(),arr.end());
        
        for(int i=x;i<t;i++)
        {
            sum += arr[i];
            count++;
        }
        
        return sum/count;
    }
};