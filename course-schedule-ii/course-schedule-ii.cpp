class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        
        vector<int> indegree(n,0);
        unordered_map<int,list<int>> l;
        
        for(auto v:p)
        {
            l[v[1]].push_back(v[0]);
            indegree[v[0]]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
                q.push(i);
        }
        
        vector<int> ans;
        
        while(q.size())
        {
            int front = q.front(); q.pop();
            ans.push_back(front);
            
            for(int nbr:l[front])
            {
                indegree[nbr]--;
                if(indegree[nbr]==0)
                    q.push(nbr);
            }
        }
        
        if(ans.size()<n)return {};
        return ans;
    }
};