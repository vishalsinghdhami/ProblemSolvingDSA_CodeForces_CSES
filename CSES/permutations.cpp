#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >>n;

if(n==1||n==0){cout<<"1";}
else if(n>3)
{ 
   int x=2;
   while(x<=n)
    {  cout<<x<<" ";
    x+=2;
    }
  int y=1;
  while(y<=n)
    { cout<<y<<" ";
    y+=2;
    }
}
else cout<<"NO SOLUTION";


}

