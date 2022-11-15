#include <bits/stdc++.h>

using namespace std;

using li = long long;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin >> t;
  while (t--) {
    li n, k;
    cin >> n >> k;
    li hrs = 0, connected = 1;
    while (connected < k) {
      connected *= 2;
      ++hrs;
    }
    if (connected < n)
    { hrs += (n - connected + k - 1) / k;
    }
    cout << hrs << '\n';
  }
}