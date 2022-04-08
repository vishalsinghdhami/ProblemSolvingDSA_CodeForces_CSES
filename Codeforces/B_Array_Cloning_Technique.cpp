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
      long long a[n];
      for(int j=0;j<n;j++)
{
    cin>>a[j];
}
int count=1;
 for(int j=1;j<n;j++)
{
    if(a[0]==a[j]){
        count++;
    }
}
if(count==n-1||n==1||n==0){
    cout<<0<<endl;
}
else{
    
}


    }
}