#include <iostream>
using namespace std;

main()
{
    long long t;
    cin >> t;
    while (t--)
    {

        long long r, c;
        cin >> r >> c;

        if (r > c)
        {
            if (r %2==0)
            {
               // cout << (r * r) - c + 1 << endl;
            }
            else
            {
               // cout << (c * c) - r + 1 << endl;
            }
        }
        else
        {
            if (c%2==0)
            {
              //  cout << (r - 1) * (r - 1) + c << endl;
            }

            else
            {
               // cout << (c - 1) * (c - 1) + r << endl;
            }
        }
    }

   
}