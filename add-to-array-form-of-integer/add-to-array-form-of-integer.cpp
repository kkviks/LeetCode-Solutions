class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        for(int i=A.size()-1;i>=0;i--){
            int sum = A[i] + K%10;
            A[i] = sum%10;
            K/=10;
            K+=sum/10;
        }
        if(K==0)return A;
        
        vector<int> v;
        while(K){
            v.push_back(K%10);
            K/=10;
        }
        int i=0, j = v.size()-1;
        while(i<j){
            swap(v[i],v[j]);
            i++, j--;
        }
        for(int i=0;i<A.size();i++){
            v.push_back(A[i]);
        }
        return v;
    }
};