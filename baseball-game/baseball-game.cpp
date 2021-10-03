class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        
        for(string curr: ops){
            if(curr=="+"){
                int t=s.top();
                s.pop();
                int val = t+s.top();
                s.push(t);
                s.push(val);
                
            }else if(curr=="D"){
                s.push(2*s.top());
            }else if(curr=="C"){
                s.pop();
            }else{
                s.push(stoi(curr));
            }
        }
        
        int sum = 0;        
        while(s.size()){
            sum += s.top();
            s.pop();
        }
        
        return sum;
    }
};