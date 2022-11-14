#include<bits/stdc++.h>
using namespace std;
 
 bool coprime(int a, int b)
 {
     if ( __gcd(a, b) == 1)
        return true;
    else
         return false;
 }
 //sum of indexes such that nos at those indexes are coprime
 
int main(){
int t ;cin>>t;
while(t--)
 { int n;cin>>n;int arr[n];

 unordered_map<int,int>m;

int ans=-1;
  for(int x=0;x<n;x++)
  {
    cin>>arr[x];
    m[arr[x]]=x;
  }
  for(int x=0;x<n;x++)
  {
   // cin>>arr[x];
    m[arr[x]]=x;
  }
 for(auto i:m)
 {  
    for(auto j:m)
    {  
    if(coprime(i.first,j.first)==true)
    {
      
          ans=max(ans,i.second+j.second+2) ; 
    }
    }
 }
 cout<<ans<<endl;

 }
return 0;
}