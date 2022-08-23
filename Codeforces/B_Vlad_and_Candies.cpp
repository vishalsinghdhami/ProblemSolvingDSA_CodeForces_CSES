#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
int t;
    cin >> t;
    long long n;
    
    for (int i = t; i > 0; i--)
    {
        cin >> n;
        long long arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);
       //  for (int j = 0; j < n; j++)
        //{
          //  cout<< arr[j];
        //}
if (n == 1)
            {
                if (arr[0] == 1){
                    cout << "YES" << endl;}
                else
                    {cout << "NO" << endl;}
            }
    if(n>1) {    
            
             if((arr[n-1] - arr[n-2]) > 1)
            {
                cout << "NO" << endl;
                
            }

            else
            {
                cout << "YES" << endl;
                
            }
        } }
    
}
