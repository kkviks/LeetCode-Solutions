class Solution {
private:
    void permute(vector<int> &a,int l, int r, vector<vector<int>> &v){
        if(l==r){
            v.push_back(a); return;
        }
        
        for(int i=l;i<=r;i++){
            swap(a[l],a[i]);
            permute(a,l+1,r,v);
            swap(a[l],a[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        permute(nums,0,nums.size()-1,v);
        return v;
    }
};