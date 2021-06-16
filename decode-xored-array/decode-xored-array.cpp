class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v(encoded.size()+1);
        v[0] = first;
        for(int i=1;i<v.size();i++)
        {
            v[i] = encoded[i-1]^v[i-1];
        }
        
        return v;
    }
};