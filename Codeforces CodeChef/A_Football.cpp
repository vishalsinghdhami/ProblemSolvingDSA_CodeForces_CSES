#include <bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
long long count=1;
vector<int> v;
for(int i = 0; i < str.size()-1; i++)
{
    if(str[i]==str[i+1]){
        count++;
        if(i==str.size()-2)
    {v.push_back(count);}
    }
    else{
            // v.push_back(count);
       v.push_back(count); count=1;
       
    }

}
int z=*max_element(v.begin(), v.end());
if(z>=7){
    cout<<"YES";
}
else cout<<"NO";
return 0;
}