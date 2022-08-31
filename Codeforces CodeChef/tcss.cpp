#include<iostream>
using namespace std;
class Solution{
public:	
	int search(int arr[], int N){
	  int jugaad;
	    int i=0, j=1;
	    while(j<=N)
	    {
	        if((arr[j]-arr[i])!=0)
	        {
	           jugaad=i;
	           return arr[i];
	           break;
	        }
	        
	        j=j+2;
	        i=i+2;
	        
	        
	    }
	   // int x= arr[jugaad];
	    
	    
	    
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int len;
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    
    return 0;
}
