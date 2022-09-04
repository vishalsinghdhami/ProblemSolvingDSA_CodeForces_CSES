#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, w, wr;
        cin >> n >> w >> wr;
        unordered_map<long long, long long> m;
        while (n--)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        long long z = 0;
        for (auto x : m)
        {
            if (x.second > 1)
            {
                if (x.second % 2 == 0)
                {
                    z = z + (x.first * x.second);
                }
                else
                {
                    z = z + (x.first * (x.second - 1));
                }
            }
        }

        if (wr + z >= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}