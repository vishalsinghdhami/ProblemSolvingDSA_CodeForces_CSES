#include<bits/stdc++.h>
using namespace std;

 
int main(){

 int n;
 cin>>n;
 if(n==1){ 
    cout<<-1<<endl;
 }
else if(n%2==0)
{
    cout <<n/2<<endl;
}
else{ 
    cout<<(n-1)/2-n<<endl;
}
 
return 0;
}