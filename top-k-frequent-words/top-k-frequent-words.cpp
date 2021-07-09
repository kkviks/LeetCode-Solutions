class COMP{
    public: bool operator()(pair<int,string> a, pair<int,string> b)
    {
        if(a.first<b.first)return false;
        else if(a.first>b.first)return true; 
        return a<b;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> m;
        
        for(string &word:words)
        {
            m[word]++;
        }
        
        priority_queue<pair<int,string>, vector<pair<int,string>>, COMP> pq;
        
        int i = 0;
        
        for(auto p:m)
        {
            if(i<k)
            {
                pq.push({p.second, p.first});
                i++;
            }else
            {
                auto top = pq.top();
                if(p.second>top.first or (p.second==top.first and p.first<top.second))
                {
                    pq.pop();
                    pq.push({p.second,p.first});
                }
                i++;
            }
        }
        
        vector<string> ans(k);
        
        for(int i = 0;i<k;i++)
        {
            auto top = pq.top();
            ans[i] = top.second;
            pq.pop();
        }
        
        sort(ans.begin(), ans.end(), [&](string a, string b){
            if(m[a]>m[b])return true;
            else if(m[b]>m[a])return false;
            return a<b;
        });
        
        return ans;
    }
    
};