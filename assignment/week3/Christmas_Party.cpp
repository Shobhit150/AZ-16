#include <bits/stdc++.h>
using namespace std;

#define int long long

int mod = 1e9+7;


void solve() {
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    if(n==1) {
        cout << "0\n";
        return;
    }
    if(n==2) {
        cout << "1\n";
        return;
    }
    int c = 0;
    for(int i=3;i<=n;i++) {
        c = ((i-1)*(a+b)%mod)%mod;
        a = b;
        b = c;
    }
    cout << c << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}