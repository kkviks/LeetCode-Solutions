class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue<int> q;
        int size = arr.size();
        for(int x: arr){
            if(x==0){
                q.push(0);
                if(q.size()==size)break;
            }
            q.push(x);
            if(q.size()==size)break;
        }
        for(int i=0;i<size;i++){
            arr[i] = q.front();
            q.pop();
        }
    }
};
