#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
    long long n;

    for (int i = t; i > 0; i--){
       cin>>n;
       cout<<1<<" "<<n-3<<" "<<1<<" "<<1<<endl;}
       return 0;
    }

    /*for (int i = t; i > 0; i--)
    {
        long long a, b, c, d;
        cin >> n;
// 

        if (n % 4 == 0)
        {
            cout << n / 4 << " " << n / 4 << " " << n / 4 << " " << n / 4 << endl;
        }
        else
        {
        cout << 1 << " " << n-3   << " " << 1 << " " << 1 << endl;
        }
    }
    return 0;
}
/*
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(int c, int d)
{
    return (c / gcd(c, d)) * d;
}*/