#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    double a, b, c;
    double p, q, r;

    for (int i = t; i > 0; i--)
    {
        cin >> p >> q >> r >> a >> b >> c;
        double z, x, y;
        if (a >= b && a >= c)
          {  z = a;
        x = q;
        y = r;}

        if (b >= a && b >= c)
           { z = b;
        x = p;
        y = r;}

        if (c >= a && c >= b)
           { z = c;
        x = p;
        y = q;}
        if ((p + q + r) > (a + b + c) / 2)
        {
            cout << "YES" << endl;
        }
        else if ((z + x + y) > (a + b + c) / 2)
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
