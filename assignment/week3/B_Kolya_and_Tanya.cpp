#include <bits/stdc++.h>
using namespace std;

#define int long long

int MOD = 1e9+7;

int binpow(int a, int b) {
    int res = 1;
    while(b) {
        if(b%2==1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    int ans = (binpow(27,n) - binpow(7,n) + MOD)%MOD;
    cout << ans << "\n";

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