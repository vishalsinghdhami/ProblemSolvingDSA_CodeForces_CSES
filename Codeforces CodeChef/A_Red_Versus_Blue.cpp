
#include<bits/stdc++.h>
using namespace std;
using lol=long long int;
#define endl "\n"
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int _=1;
cin>>_;
while(_--)
{
    int n,r,b;
    cin>>n>>r>>b;
    int p=r/(b+1),q=r%(b+1);
    for(int i=0;i<q;i++)    cout<<string(p+1,'R')<<'B';
    for(int i=q;i<b;i++)    cout<<string(p,'R')<<'B';
    cout<<string(p,'R');
    cout<<endl;
}
return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         string s;
//         int n,r,b,k=0;
//         cin>>n>>r>>b;
//         for(int i=0; i<=b; i++)
//         {
//             for(int j=0; j<((r+i)/(b+1)); j++)
//                 s+='R';
//             if(i<b)
//                 s+='B';
//         }
//         cout<<s<<endl;
 
//     }
 
 
 
 
//}