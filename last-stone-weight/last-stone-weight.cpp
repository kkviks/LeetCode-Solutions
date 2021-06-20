class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        for(int stone : stones){
            pq.push(stone);
        }
        
        while(pq.size()>=2){
            int y = pq.top(); pq.pop();
            int x = pq.top(); pq.pop();
            y -= x;
            if(y>0)pq.push(y);
        }
        
        if(pq.empty())return 0;
        
        return pq.top();
    }
};