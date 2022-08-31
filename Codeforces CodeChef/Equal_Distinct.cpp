#include<bits/stdc++.h>
using namespace std;
 

int main(){
int t ;cin>>t;
while(t--)
{
    int n;
    cin>>n;
    vector<int> v;
  for(int i=0;i<n;i++)
    { int x;
   cin>>x;
   v.push_back(x);
    }

    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[v[i]]++;

    }
 //vector<int>vec;
 int z=0,y=0;
 for(auto x:m)
 {if(x.second==1)
 {
    z++;
 }
 else{
    y++;
 }
    

 }

if(z%2==0){ cout<<"YES"<<endl; }
else if(z%2!=0&&y>0){ cout<<"YES"<<endl;}
else{ cout<<"NO"<<endl;}


 
}

return 0;
}