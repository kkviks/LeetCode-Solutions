class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        
        int n = a.size();
        sort(a.begin(), a.end());
        
        int closestSum, min_diff = INT_MAX;
        
        for(int i=0;i<n-2;i++)
        {
            int j = i+1, k = n-1;
            
            while(j<k)
            {
                int sum = a[i]+a[j]+a[k];
                
                if(abs(target-sum)<min_diff)
                {
                    min_diff = abs(target-sum);
                    closestSum = sum;
                }
                
                if(target>sum)
                {
                    j++;
                }
                else if(target<sum)
                {
                    k--;
                }
                else
                {
                    return sum;
                }
            }
        }
        
        return closestSum;
    }
};