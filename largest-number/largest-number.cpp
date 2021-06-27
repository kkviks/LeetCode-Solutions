class Solution {
public:
    string largestNumber(vector<int>& nums) {
        
        if(count(begin(nums), end(nums),0)==nums.size())
            return "0";
        
        vector<string> v(nums.size());
        
        for(int i=0;i<nums.size();i++){
            v[i] = to_string(nums[i]);
        }
        
        sort(v.begin(), v.end(), cmp);
        
        string ans = "";
        
        for(auto &x:v)
            ans+=x;
        
        return ans;
    }
    
    static bool cmp(string a, string b){
        return a+b >= b+a;
    }
};