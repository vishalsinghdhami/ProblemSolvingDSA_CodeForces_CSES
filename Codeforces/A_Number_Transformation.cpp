
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
int ts;
    cin >> ts;
     //pair<int,int> p;
float  temp;
    
    for (int i = ts; i > 0; i--)
    {
         long long x, y, a, b;
         cin>>x>>y;
         temp = y/x;
         if(y<x or temp != int(temp))
         {
             a = 0; b = 0;
         }
         else
         {
             a = 1; b = temp;
         }
         cout<<a<<' '<<b<<endl;
 
     }  
        
    }
