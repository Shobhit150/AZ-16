#include <bits/stdc++.h>
using namespace std;

const int N = 200000;
int fact[N+1];
int inverse[N+1];
int MOD = 1e9+7;

int binpow(int a, int b) {
    long long res = 1;
    while(b) {
        if(b%2==1) res = (res*a)%MOD;
        a = (1LL*a*a)%MOD;
        b >>= 1;
    }
    return res;
}
void precompute() {
    fact[0] = 1;
    for(int i=1;i<=N;i++) {
        fact[i] = (1LL*i*fact[i-1])%MOD;
    }
    inverse[N] = binpow(fact[N], MOD-2);

    for(int i=N-1;i>=0;i--) {
        inverse[i] = (1LL*inverse[i+1]*(i+1))%MOD;
    }
}
void solve() {
    int n,m;
    cin >> n >> m;
    
    long long ans = fact[m+n];
    ans = (1LL*ans * inverse[m])%MOD;
    ans = (1LL*ans * inverse[n])%MOD;

    cout << ans << "\n";
    
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    precompute();
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}