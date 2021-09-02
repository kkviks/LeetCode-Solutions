class TopVotedCandidate {
private:
    vector<int> winner,times;
public:
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        int curr_winner = persons[0];
        int max_votes = 1;
        unordered_map<int,int> m;
        m[persons[0]] = 1;
        
        winner.push_back(curr_winner);
        
        for(int i=1;i<times.size();i++){
            if(++m[persons[i]] >= max_votes ){
                max_votes = m[persons[i]];
                curr_winner = persons[i];
            }
            winner.push_back(curr_winner);
        }
        this->times = times;
    }
    
    int q(int t) {
        int idx = upper_bound(times.begin(), times.end(), t)-times.begin()-1;
        return winner[idx];
    }
};

/**
 * Your TopVotedCandidate object will be instantiated and called as such:
 * TopVotedCandidate* obj = new TopVotedCandidate(persons, times);
 * int param_1 = obj->q(t);
 */