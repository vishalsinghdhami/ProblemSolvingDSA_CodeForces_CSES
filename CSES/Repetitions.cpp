#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
vector<int> v;
char current; int count=0,answer=0;
for(int i =0;i<str.length();i++)
{
   if(str[i]==str[i+1])
   {  count++;
      
    }
else{

v.push_back(count+1);
count=0;
   }
}
 cout<<*max_element(v.begin(), v.end());

}