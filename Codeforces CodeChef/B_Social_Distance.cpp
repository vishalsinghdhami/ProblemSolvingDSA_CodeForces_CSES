#include<bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
int t ;cin>>t;
while(t--)
{
 int npep,chairs;
 cin>>npep>>chairs;
vector<int>v;
 for(int i=0;i<npep;i++)
 {
int x;cin>>x;
v.push_back(x);
 }
 sort(v.begin(),v.end());
 long long ans=0; int lastidx=v.size()-1;
ans+=((2*v[lastidx])+1);
ans+=1;
for(int i=1;i<=lastidx-1;i++)
{
    ans+= v[i]+1;
    
}
if(ans<=chairs){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

}

return 0;
}