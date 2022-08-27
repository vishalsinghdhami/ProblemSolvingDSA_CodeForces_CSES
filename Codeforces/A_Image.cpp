#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while(t--)
{

char arr[4];
cin>>arr[0]>>arr[1];
//int arr2[2];
cin>> arr[2]>>arr[3];
 
 map<char,int> m;

 for(int i=0;i<4;i++)
 {
    m[arr[i]]++;
 }
int jugaad=0,desi=0;
for(auto x:m)
{
// cout<<x.first<<" "<<x.second<<endl;    
// }
   if(x.second==4){
    cout<<"0"<<endl;
   }
   else if(x.second==2)
   {
     jugaad++;
   }
   else if(x.second==1){
    desi++;
   }
  else if(x.second==3)
  {
    cout<<"1"<<endl;
  }
   }


 if(jugaad==2){cout<<"1"<<endl;}
 else if(jugaad==1&&desi==2){cout<<"2"<<endl;}
else if(desi==4){cout<<"3"<<endl;}
}
return 0;
}