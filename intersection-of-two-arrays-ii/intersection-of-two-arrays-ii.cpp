class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int,int> m1, m2;
        
        for(int x:nums1)
            m1[x]++;
        
        for(int y:nums2)
            m2[y]++;
        
        vector<int> ans;
        
        for(int x:nums1)
        {
            if(m1.count(x) and m2.count(x))
            {
                int cnt = min(m1[x],m2[x]);
                while(cnt--)
                    ans.push_back(x);
                m1.erase(x);
                m2.erase(x);
            }
        }
        
        return ans;
        
    }
};