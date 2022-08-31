#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int fun(int x, int y)
{
    if(y==0){ return 1;}
    if(y==1){ return x;}
int ans =fun(x,y/2);
if(y%2==0)
return ans*ans;
return ans*ans*x;
}

int main()
{
int ts;
    cin >> ts;
     

    
    for (int i = ts; i > 0; i--)
    {string s1;
     string s2;
        cin >> s1;
        cin >> s2;
        int n=s1.size();
        int m=s2.size();
        int a1=0;
        int a2=0;

  
   for(int i=0;i<s2.size();i++)
   {
       if(s2[i]=='a')
       {
           a2++;
           
       }
    }
    if(a2==0){ cout<<fun(2,n)<<endl;}
    else if(a2==1&&m==1)
    {
        cout<<1<<endl;
    }
    else cout<<-1<<endl;









    }


}    