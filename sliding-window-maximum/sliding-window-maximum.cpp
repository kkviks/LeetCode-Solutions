class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        multiset<int,greater<int>> set;
        vector<int> ans;
        
        for(int i=0;i<a.size();i++){
            
            if(i<k){
                set.insert(a[i]);
            }else{
                ans.push_back(*set.begin());
                set.erase(set.find(a[i-k]));
                set.insert(a[i]);
            }
        }
        
        ans.push_back(*set.begin());
        return ans;
    }
};