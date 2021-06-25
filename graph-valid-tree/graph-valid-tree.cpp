class Solution {
    struct DSU{
        vector<int> parent, rank;
        DSU(int n){
            parent.reserve(n);
            rank.reserve(n);
            for(int i=0;i<n;i++){
               parent.push_back(-1);
               rank.push_back(1);
            }
        }
        
        int find(int i){
            if(parent[i]==-1)
                return i;
            return parent[i] = find(parent[i]);
        }
        
        void unite(int a, int b){
            int s1 = find(a);
            int s2 = find(b);
            
            if(rank[s2]>rank[s1])
                swap(s2,s2);
            parent[s2] = s1;
            rank[s1] += rank[s2];
        }
        
        int groupCount(){
            return count(parent.begin(),parent.end(),-1);
        }
        
    };
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        DSU dsu(n);
        
        for(auto edge:edges){
            int u = edge[0];
            int v = edge[1];
            if(dsu.find(u)==dsu.find(v))
                return false;
            else
                dsu.unite(u,v);
        }
        
        return dsu.groupCount()==1;
    }
};