class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        map<string, string> m;
        for (auto &v : paths)
        {
            m[v[0]] = v[1];
            if(m.count(v[1])==0)
                m[v[1]] = "0";
        }
        string ans = "";
        for (auto &i : m)
        {
            if (i.second == "0")
            {
                ans = i.first;
                break;
            }
        }
        return ans;
    }
};
