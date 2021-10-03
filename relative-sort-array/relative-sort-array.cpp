class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> m;
        
        for(int i=0;i<arr2.size();i++){
            m[arr2[i]] = i;
        }
        
        auto comp = [m](int a,int b){
            if(m.count(a)==0 and m.count(b)==0){
                return a<b;
            }
            
            if(m.count(a)==0)return false;
            if(m.count(b)==0)return true;
            
            return m.at(a)<m.at(b); 
        };
        
        sort(begin(arr1),end(arr1),comp);
        
        return arr1;
    }
};