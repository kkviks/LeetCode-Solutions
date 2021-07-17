class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        
        int n = arr.size();
        vector<vector<int>> l(n);
        
        for(int i=0;i<n;i++)
        {
            if(i+arr[i]>=0 and i+arr[i]<n)
                l[i].push_back(i+arr[i]);
            if(i-arr[i]>=0 and i-arr[i]<n)
                l[i].push_back(i-arr[i]);
        }
        
        vector<int> visited(n,false);
        
        return dfs(arr,start,l,visited);        
    }
    
    bool dfs(vector<int> &arr, int start, vector<vector<int>> &l, vector<int> &visited)
    {
        visited[start] = true;
        
        if(arr[start]==0)
            return true;
        
        for(int child:l[start])
        {
            if(visited[child]==false)
            {
                bool ans = dfs(arr,child,l,visited);
                if(ans==true)
                    return true;
            }
        }
        
        return false;
    }
        
};