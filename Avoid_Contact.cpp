#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x, y, n;

    for (int i = t; i > 0; i--)
    {
        cin >> x >> y;
        if (x == y)
        {
            n = 2 * y - 1;
        }
        else if (y == 0)
        {
            n = x;
        }
        else
        {
            n = x + y;
        }
        cout << n << endl;
    }
    return 0;
}