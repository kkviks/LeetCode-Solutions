class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        
        for(int num: nums){
            m[num]++;
        }
        
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        auto itr = m.begin();
        while(itr!=m.end()){
            if(pq.empty()){
                for(int i=0;i<k;i++){
                    pq.push({itr->second,itr->first});
                    itr++;
                }
            }else{
                if(itr->second > pq.top().first){
                    pq.pop();
                    pq.push({itr->second,itr->first});
                }
                itr++;
            }
        }
        
        vector<int> ans;
        
        while(pq.size()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};