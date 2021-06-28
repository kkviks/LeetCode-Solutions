class Solution {
public:
    int findMaxLength(vector<int>& a) {
        
        int max_length = 0;
        unordered_map<int,int> m;
        int k = 0;
        m[k]=-1;
        
        int pre_sum = 0;
        for(int i=0;i<a.size();i++)
        {
            a[i]==0?pre_sum--:pre_sum++;
            if(m.count(pre_sum - k))
            {
                max_length = max(max_length,i-m[pre_sum-k]);
            }else 
            {
                m[pre_sum-k]=i;
            }
        }
        
        return max_length;
    }
};