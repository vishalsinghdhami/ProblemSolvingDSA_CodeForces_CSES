#include <bits/stdc++.h>
using namespace std;
int ans = 0;

void solve(int l,int s,int i)
{
    if(s<=0 and l!=0)
        return;
    if(s==0 and l==0)
    {    ans+=1;
    return;}
    

    for (int j = i + 1; j <= 26;++j)
    {
        solve(l - 1, s - j, j);
        // solve(l , s , j );
    }
}
int main()
{

    int l, s;
    cin >> l >> s;
    solve(l, s,0);
    cout << ans << endl;
    return 0;
}