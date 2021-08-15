class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(auto &row:matrix)
        {
            if(row.front()>target)
                break;
            
            if(target<=row.back())
            {
                bool isPresent = binarySearch(row, target);
                if(isPresent)
                    return true;
            }
        }
        
        return false;
    }
    
    bool binarySearch(vector<int> &a, int target)
    {
        int l=0, r=a.size()-1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(a[mid]==target)
                return true;
            else if(target>a[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        
        return false;
    }
};