#include<iostream>
using namespace std;
int main(){
long long n; cin>>n;
long long arr[n];
for(long long i=0;i<n;i++)
{
    cin>>arr[i];
}
long long k=0;
long long i =0,j=1;
while(j<n)
{
    if(arr[i]>arr[j])
    {
        int x=arr[i]-arr[j];
       arr[j]=arr[i];
        k=k+x;
        i++;j++;
    }
    else{
        i++; j++;

    }

}

cout<<k;


return 0;
}