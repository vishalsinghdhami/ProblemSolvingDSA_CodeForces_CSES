#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
    cin >> t;
    double n,ans;

    for (int i = t; i > 0; i--){
                 cin>>n;
            
          
                ans= pow(n*0.143,n);
              
int newans=ans;
if ((ans-newans)>0.5){ cout <<newans+1  <<endl    ;}
else{
    cout<<newans<<endl;
}
            }
         
           
   return 0;
    }


