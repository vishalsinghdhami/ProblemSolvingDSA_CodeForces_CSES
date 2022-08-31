#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;\
while(t--)
{ int n; cin>>n;
string str1;
string str2;
cin>>str1;
cin>>str2;

vector<char> v1;
vector<char> v2;

 for(int i=0;i<n;i++)
{
    
        v1.push_back(str1[i]);
        v2.push_back(str2[i]);
    

}
  for(int i=0;i<n;i++)
  {
    if(v1[i]=='G')
    {
        v1[i]='B';
    }
    if(v2[i]=='G')
    {
        v2[i]='B';
    }
  }
  int z=0;
  
for (int i=0;i<n;i++) {
       if(v1[i]==v2[i]){

        z++;
       }
 }

if(z==n){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


  
}






return 0;
}