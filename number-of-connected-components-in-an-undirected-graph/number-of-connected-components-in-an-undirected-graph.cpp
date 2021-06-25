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
            a = find(a);
            b = find(b);
            
            if(a!=b){
                if(rank[b]>rank[a])
                swap(a,b);
                parent[b] = a;
                rank[a] += rank[b];
            }
        }
        
        int countCompo(){
            return count(parent.begin(), parent.end(), -1);
        }
    };
    
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        
        DSU dsu(n);
        for(auto edge:edges){
            dsu.unite(edge[0],edge[1]);
        }
        return dsu.countCompo();
    }
};