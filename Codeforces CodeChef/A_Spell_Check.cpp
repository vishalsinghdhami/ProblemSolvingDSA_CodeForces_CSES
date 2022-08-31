#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){

int t;cin>>t;
while(t--){
int n;
cin>>n;
string str;
cin>>str;

string s="Timur";
sort(s.begin(), s.end());
sort(str.begin(), str.end());

if(str==s)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}



return 0;
}