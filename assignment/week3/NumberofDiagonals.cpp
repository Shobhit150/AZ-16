#include <bits/stdc++.h>
using namespace std;

int mod = 1e9+7;

int binpow(long long a, long long b) {
    long long res = 1;
    while(b) {
        if(b%2==1) res = (res*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return res;
}
void solve() {
    int n;
    cin >> n;
    
    int ans = ((1LLn*(n-3))%mod);
    cout << (1LL*ans*binpow(2,mod-2))%mod << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}