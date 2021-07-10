class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> ans;
        
        int i = 0, j = 0, k = 0;
        
        while(i<arr1.size() and j<arr2.size() and k<arr3.size())
        {
            int mx = max({arr1[i], arr2[j], arr3[k]});
            if(arr1[i]<mx)
                i++;
            if(arr2[j]<mx)
                j++;
            if(arr3[k]<mx)
                k++;
            
            if(arr1[i]==arr2[j] and arr2[j]==arr3[k])
            {
                ans.push_back(arr1[i]);
                i++; j++; k++;
            }
        }
        
        return ans;
    }
};