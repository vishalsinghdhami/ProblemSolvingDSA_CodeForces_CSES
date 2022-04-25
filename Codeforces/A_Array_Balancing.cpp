#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
int n;
long long a[n],b[n];
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }

     /*    for(int i=0;i<n;i++){
            if(abs(a[i]-a[i+1])>abs(b[i]-a[i+1]))
            { 
                swap(a[i],b[i]);
                
            }

        }
        vector<long long> v;
       // vector<long long> d;
        for(int i=0;i<n-1;i++)
        {
             v.push_back(abs(a[i]-a[i+1]));
             v.push_back(abs(b[i]-b[i+1]));

              
        }
        */

   for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
         for(int i=0;i<n;i++){
            cout<<b[i]<<" ";
        }
//for(int i=0;i<v.size();i++){
 //           cout<<v[i]<<" ";
 //       }
      //  cout<<accumulate(v.begin(), v.end(), 0)<<endl;

                                        

    }
}