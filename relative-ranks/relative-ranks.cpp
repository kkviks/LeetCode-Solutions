class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        
        vector<string> ans(score.size());
        
        for(int i=0;i<score.size();i++)
        {
            pq.push({score[i],i});
        }
        
        int rank = 1;
        while(pq.size())
        {
            auto top = pq.top(); pq.pop();
            switch(rank)
            {
                case 1:
                    ans[top.second] = "Gold Medal";
                    break;
                case 2:
                    ans[top.second] = "Silver Medal";
                    break;
                case 3:
                    ans[top.second] = "Bronze Medal";
                    break;
                default:
                    ans[top.second]  = to_string(rank);
            }
            
            rank++;
        }
        
        return ans;
    }
};