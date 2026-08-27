#include <bits/stdc++.h>
using namespace std;

#define int long long

int MOD = 1e9+7;


int binpow(int a, int b, int mod) {
    int res = 1;
    while(b) {
        if(b%2==1) res = (res*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return res%mod;
}

void solve() {
    int a,b,c,p;
    cin >> a >> b >> c >> p;
    int z = binpow(b,c,MOD);
    cout << binpow(a,z,p) << "\n";
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