#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   int n;
    cin>>n;
        string str;
        cin >> str;
        set<char>s;
        int nas=0;
        for(int i=0;i<str.size();i++){
            s.insert(str[i]);
            nas+=s.size();
        }
        cout<<nas<<endl;

    }

    return 0;
}