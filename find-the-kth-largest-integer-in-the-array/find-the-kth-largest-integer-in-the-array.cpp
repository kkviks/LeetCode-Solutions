class Solution {
    struct comp{
        bool operator()(string a, string b){
            if(a.size()>b.size())return false;
            if(b.size()>a.size())return true;
            
            return b>a;
        }
    };
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        
        priority_queue<string, vector<string>, comp> pq;
        
        for(string &num: nums){
            pq.push(num);
        }
        
        while(--k){
            cout << pq.top() << " ";
            pq.pop();
        }
        
        return pq.top();
    }
};