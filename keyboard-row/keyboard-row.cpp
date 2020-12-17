class Solution
{
public:
​
    char to_lower(char ch){
        if(ch>='A' and ch<='Z')
            return ch-'A'+'a';
        return ch;
    }
    vector<string> findWords(vector<string> &words)
    {
        string s = "qwertyuiop";
        map<char, int> m;
        for (char &ch : s)
            m[ch] = 1;
        s = "asdfghjkl";
        for (char &ch : s)
            m[ch] = 2;
        s = "zxcvbnm";
        for (char &ch : s)
            m[ch] = 3;
​
        vector<string> v;
        for (string &word : words)
        {
            char ch = to_lower(word[0]);
            int val = m[ch];
            for (char ch : word)
            {
                ch = to_lower(ch);
                if (m[ch] != val)
                {
                    val = -1;
                    break;
                }
            }
            if (val != -1)
                v.push_back(word);
        }
        return v;
    }
};
