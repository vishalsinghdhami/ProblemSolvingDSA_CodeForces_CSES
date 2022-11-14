#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int z = n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = z;
            z--;
        }
        if (n % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else if (n == 3 || n == 1)
        {
            cout << -1;
        }
        else if (n == 5)
        {
            cout << 5 << " " << 4 << " " << 1 << " " << 2 << " " << 3;
        }
        else
        {
            swap(arr[n / 2], arr[n / 2 + 1]);
            for (int i = 0; i < n; i++)

            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}