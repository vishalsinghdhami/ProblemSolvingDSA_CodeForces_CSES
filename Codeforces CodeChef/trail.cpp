#include <iostream>
using namespace std;

int main() {

	//vishalsinghdhami
	int t; cin>>t;
while(t--){
   int n;cin>>n;
long long a[n],b[n],c[n];
for(int i=0;i<n;++ i){
cin >> a[i];
}
for(int i=0;i<n;++ i){
cin >> b[i];
}
long long max=0;
long long sum=0;
for(int i=0;i<n;++ i){
c[i]=a[i]-b[i];
sum+=c[i];
if(c[i]>0){
max+=c[i];
}
}
if(sum== 0){
cout << max << endl ;}
else{
cout <<-1 << endl;
}


}
return 0;
}
