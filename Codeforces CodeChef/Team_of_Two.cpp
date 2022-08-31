#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int N = 1e5 + 7;

int main() {
   // FAST;
    int t; cin >> t;
    while (t--) 
    {


        int n; cin >> n;
        vector<vector<int>> v(n, vector<int> ());
        for (int i = 0; i < n; i++) 
        {
            int x; cin >> x;
            while (x--) 
            {
                int xx; cin >> xx;
                v[i].push_back(xx);
            }
        }
        bool ok = 0;
        for (int i = 0; i < n; i++) 
        {
       
        for (int j = i + 1; j < n; j++) {
                set<int> st;
                
                for (int xx : v[i]) 
                {st.insert(xx);}
               
                for (int xx : v[j]) 
                {st.insert(xx);}
                
                
                if (st.size() == 5) {ok = 1;}
            }
        }
      
      
        if (ok) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
   
   
    }
}