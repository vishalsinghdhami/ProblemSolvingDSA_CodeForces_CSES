#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


int t; cin>>t;
while(t--){
   int n; cin>>n;
  map<string,int> mp; 

vector<string> v;
   for(int i=0; i<3*n;i++)
{    string str;
cin>>str;
v.push_back(str);

  
}

for(int i=0;i<3*n;i++)
{
      mp[v[i]]++;
}

int ans1=0,ans2=0,ans3=0;
for(int i=0;i<n;i++){
if(mp[v[i]]== 1)ans1+=3;
else if(mp[v[i]]== 2)ans1+=1;
}
for(int i=n;i<2*n;i++){
if(mp[v[i]]== 1)ans2+=3;
else if(mp[v[i]]== 2)ans2+=1;
}
for(int i=2*n;i<3*n;i++){
if(mp[v[i]]== 1)ans3+=3;
else if(mp[v[i]]== 2)ans3+=1;
}
cout << ans1 <<" "<< ans2 <<" "<< ans3 << endl;
}







return 0;
}