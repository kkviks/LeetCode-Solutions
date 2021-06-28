class Solution {
public:
    vector<int> pancakeSort(vector<int>& a) {
        
        vector<int> ans;
        
        int i = a.size()-1;
        int maxIdx, maxVal;
        
        while(i!=0)
        {
            maxIdx = i;
            maxVal = a[i];
            
            for(int j=i;j>=0;j--)
            {
                if(a[j]>maxVal)
                {
                    maxVal = a[j];
                    maxIdx = j;
                }
            }
            if(maxIdx==i)
                i--;
            else
            {
                ans.push_back(maxIdx+1);
                reverse(a.begin(), a.begin()+maxIdx+1);
                ans.push_back(i+1);
                reverse(a.begin(),a.begin()+i+1);
                i--;
            }
        }
        
        return ans;
        
    }
};