class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        list<int> l;
        for(int i=0;i<index.size();i++){
            auto itr = l.begin();
            advance(itr,index[i]);
            l.insert(itr,nums[i]);
            cout << i << " : " << l.size() << endl;
        }
        vector<int> v(nums.size());
        auto itr = l.begin();
        for(int i=0;itr!=l.end();i++){
            v[i] = *itr;
            itr++;
        }
        return v;
    }
};