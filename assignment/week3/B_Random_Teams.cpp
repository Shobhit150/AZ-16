#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int m,n;
    cin >> m >> n;
    int maxFact = m-n+1;

    int maxi = 1LL*maxFact*(maxFact-1)/2;

    int q = m/n;
    int r = m%n;
    int mini = (r*(q+1)*q/2) + ((n-r)*q*(q-1)/2);

    cout << mini << " " << maxi << "\n";
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