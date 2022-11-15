#include<bits/stdc++.h>
using namespace std;
 
 
 
 
int main(){
int t ;cin>>t;
while(t--)
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 int count;
 int ans[n];
 ans[0]=arr[0];bool jugad=false;
for(int i=1;i<n;i++)
{   if(arr[i]==0){ans[i]=ans[i-1];}
   else if(arr[i]<=ans[i-1])
    {   jugad=true;
        cout<<-1<<endl;
    
        break;
    }

        ans[i]=arr[i]+ans[i-1];
    
}
 if(jugad==false){
   for(int i=0;i<n;i++)
 { 
    cout<<ans[i]<<" ";
 }
 cout<<endl;
 }
 
   }
return 0;
}