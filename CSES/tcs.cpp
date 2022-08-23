#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
int n;
cin>>n;
vector<int> v;
while(n>0)
{int x;
cin>>x;
v.push_back(x);
int arr[x];
if(x==4){v[x]=v[x]+1;}
else if(x==5){v[x]=v[x]+2;}
else if(x>5){v[x]=v[x]+4;}
for(int i=0;i<x;i++)
{
    cin>>arr[i];
}


n--;
}

int sex=*max_element(v.begin(), v.end());

if(sex==v[0]){
    cout<<"Radha";
}
sort(v.begin(),v.end());
int z=v.size();
if(v[z-1]==v[z-2])
{
    cout<<"Tie";
}






    return 0;
}