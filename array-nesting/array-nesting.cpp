class Solution {
public:
    int arrayNesting(vector<int>& a) {
        int n = a.size();
        int ans = 0;
        vector<bool> visited(n,false);
        
        for(int i=0;i<n;i++){
            int count=0;
            int curr = i;
            while(visited[curr]==false){
                visited[curr] = true;
                curr = a[curr];
                count++;
            }
            ans = max(ans,count);
        }
        
        return ans;
    }
};