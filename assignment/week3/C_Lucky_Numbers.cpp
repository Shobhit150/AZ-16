#include <bits/stdc++.h>
using namespace std;

// s = a ar ar^2 ar^3 (a*r^(n-1))
// sr = ar ar^2 ar^3 ar^4 (a*r^n)
#define int long long
// s(1-r) = a - a*r^n
// s = a(1-r^n)/(1-r)
// s = a(r^n-1)/(r-1)
int MOD = 1e9+7;

int binpow(int a, int b) {
    int res = 1; 
    while(b) {
        if(b%2==1) res = (a*res)%MOD;
        a = (a*a)%MOD;
        b >>= 1;
    }
    return res;
}


void solve() {
    int n;
    cin >> n;
    cout << (1LL << (n + 1)) - 2 << '\n';
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