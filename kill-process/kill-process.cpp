class Solution {
public:
    vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
        unordered_map<int,list<int>> l;
        
        for(int i=0;i<ppid.size();i++){
            int parent = ppid[i];
            int child = pid[i];
            l[parent].push_back(child);
        }
        
        vector<int> killProcess;
        killProcess.reserve(pid.size());
        
        dfs(kill, l, killProcess);
        return killProcess;
    }
    
    void dfs(int node, unordered_map<int,list<int>> &l, vector<int>  &killProcess){
        killProcess.push_back(node);
        
        if(l.count(node)==0)
            return;
        
        for(auto child:l[node]){
            dfs(child, l , killProcess);
        }
    }
};