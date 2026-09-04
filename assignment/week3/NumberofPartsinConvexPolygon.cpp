#include <bits/stdc++.h>
using namespace std;

// 4 = 4
// 5 = 11

int mod = 1e9+7;

int binpow(long long a, long long b) {
    long long res = 1;
    while(b) {
        if(b%2==1) res = res*a%mod;
        a = a*a%mod;
        b >>= 1;
    }
    return res;
}

void solve() {
    long long n;
    cin >> n;
    if(n==3) {
        cout << "0\n";
        return;
    }
    long long ans = n*(n-1)%mod;
    ans = ans*(n-2)%mod;
    ans = ans*(n-3)%mod;
    ans = ans*binpow(24,mod-2)%mod;


    long long ans2 = n*(n-1)%mod;
    ans2 = ans2*binpow(2,mod-2)%mod;

    cout << (ans + ans2 + 1 - n+mod)%mod << "\n";
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