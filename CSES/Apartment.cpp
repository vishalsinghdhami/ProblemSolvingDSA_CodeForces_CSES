#include <bits/stdc++.h>
using namespace std;

int main()
{
long long n,m,k;
cin>> n>>m>>k;
int v=0;
long long a[n],b[n];
for(long long i=0;i<n;i++)
{
    cin>>a[i];
}
for(long long i=0;i<m;i++)
{
    cin>>b[i];
}
sort(a, a + n);
	sort(b, b + m);
long long i=0,j=0;
while(i<n&&j<m)
{
    if(abs(a[i]-b[j])<=k)
{
    ++i;++j;
    ++v;
}
   else{
        if(a[i]-b[j]>k){
            ++j;
        }
        else{
            ++i;
        }


   }

}
cout<<v;
}
    



