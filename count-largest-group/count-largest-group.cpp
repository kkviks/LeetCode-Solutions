class Solution
{
public:
    int sumDigits(int n)
    {
        int sum = 0;
        while (n)
        {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
​
    int countLargestGroup(int n)
    {
        map<int, int> m;
        for (int i = 1; i <= n; i++)
        {
            m[sumDigits(i)]++;
        }
        int mx = 0;
        for (auto i : m)
        {
            mx = max(mx, i.second);
        }
        int cnt = 0;
        for (auto i : m)
        {
            if (i.second == mx)
                cnt++;
        }
        return cnt;
    }
};
​
​
