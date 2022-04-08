#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
   {     return gcd(a-b, b);
   }
   else{
    return gcd(a, b-a);}
}
int ans(int c,int d,int ansgcd)
{ 
    int x; int y;
    c*x + d*y= ansgcd;
}
  
// Driver program to test above function
int main()
{
    int a,b;
    cin>>a>>b;
    int ansgcd =gcd(a, b);
     ans(a,b,ansgcd);
    return 0;
}