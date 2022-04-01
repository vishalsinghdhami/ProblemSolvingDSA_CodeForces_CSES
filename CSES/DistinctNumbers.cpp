#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    sort(numbers, numbers + n);

    vector<int> v;

    for (int c = 0; c < n; c++)
    {

        if (numbers[c] != numbers[c + 1])
        {
            v.push_back(numbers[c]);
        }
    }
    cout << v.size();

    return 0;
}
