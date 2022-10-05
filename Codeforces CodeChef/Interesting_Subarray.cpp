#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
 long long n;
	    cin>>n;
	     long long arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
//sort(arr,arr+n);
  long long y=*min_element(arr, arr + n);
  long long z=*max_element(arr, arr + n);
  
  cout <<y*y<<" "<<z*z  <<endl;
  
 
	}
	return 0;
}
