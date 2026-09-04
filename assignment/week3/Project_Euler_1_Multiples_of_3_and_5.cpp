#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;
    int a = (n-1)/3;
    int b = (n-1)/5;
    int c = (n-1)/15;
    int ans = 3*(a*(a+1)/2);
    int ans2 = 5*(b*(b+1)/2);
    int ans3 = 15*(c*(c+1)/2);
    cout << ans+ans2-ans3 << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}