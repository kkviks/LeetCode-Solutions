class Solution {
public:
    int majorityElement(vector<int>& a) {
        int ans = a[0];
        int count = 1;
        
        for(int i=1; i<a.size(); ++i)
        {
            if(a[i]==ans)count++;
            else
            {
                count--;
                if(count==0)
                {
                    ans = a[i];
                    count = 1;
                }
            }
        }
        return ans;
    }
};