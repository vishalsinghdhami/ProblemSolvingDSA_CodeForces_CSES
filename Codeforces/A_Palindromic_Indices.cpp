#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int t;
    cin >> t;
for (int i = t; i > 0; i--){
int n;
cin>>n;
string str;
cin>>str;
long count =0;
for(int i=(n+1)/2;i<n;++i){
    if(str[i]!=str[n/2])break;
    count=count+2;
}
count= count+n%2;
cout<<count<<endl;


}
return 0;}