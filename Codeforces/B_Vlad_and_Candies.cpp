#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    long n;

    for (int i = t; i > 0; i--)
    {
        cin >> n;
        long arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);

        for (int l = 0; l < n / 2; l++)
        {
            if (n == 1)
            {
                if (arr[0] == 1)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            if(n>1){ if((arr[l + 1] - arr[l]) > 1)
            {
                cout << "NO" << endl;
            }

            else
            {
                cout << "YES" << endl;
            }
        }
    }
}}
