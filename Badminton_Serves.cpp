#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int p;

    for (int i = t; i > 0; i--)
    {
        cin >> p;
        int x;
        if (p % 2 == 0)
        {
            x = p / 2;
        }
        else
        {
            x = p - 1;
            x = x / 2;
        }
        cout << x + 1 << endl;
    }

    return 0;
}