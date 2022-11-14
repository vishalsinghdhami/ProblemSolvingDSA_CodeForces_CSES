#include<bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
int t ;cin>>t;
while(t--)
{
 int size;
 cin>>size;
 int arr[size];
 for(int i=0;i<size;i++)
 {
    cin>>arr[i];
 }
 map<int,int>m;
 for(int i=0;i<size;i++)
 {
    m[arr[i]]++;
 }
 bool jugad=true;
 for(auto z:m)
 {
    if(z.second>1)
    {
        jugad=false;
        break;
        
    }
 }
 if(jugad)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;


 
 
}

return 0;
}