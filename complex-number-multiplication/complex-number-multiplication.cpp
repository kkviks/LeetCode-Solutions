class Solution
{
public:
private:
    int to_num(string s)
    {
        int num = 0;
        int i = 0;
        if (s[0] == '-')
            i++;
        for (; i < s.length(); i++)
        {
            num = num * 10 + (s[i] - '0');
        }
        if (s[0] == '-')
            return -num;
        return num;
    }
​
private:
    tuple<int, int> extract(string s)
    {
        string real = "";
        int i = 0;
        while (s[i] != '+')
        {
            real += s[i++];
        }
        i++;
        string img = "";
        while (s[i] != 'i')
        {
            img += s[i++];
        }
        return make_tuple(to_num(real), to_num(img));
    }
​
public:
    string complexNumberMultiply(string a, string b)
    {
        int x, y, c, d;
        tie(c, d) = extract(a);
        tie(x, y) = extract(b);
        string ans = to_string(c * x - d * y) + "+" + to_string(c * y + d * x) + "i";
        return ans;
    }
};
