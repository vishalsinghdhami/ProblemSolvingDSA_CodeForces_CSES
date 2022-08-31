#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;

    for (int i = t; i > 0; i--)
    {
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
       
            else
            {
                if (n % 10 >= n % 7)
                {
                    cout << n - n % 7 << endl;
                }
                else
                {
                    cout << n + 7 - n % 7 << endl;
                }
            }
        }
    }


//return 0;
