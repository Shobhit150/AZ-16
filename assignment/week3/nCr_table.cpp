#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int ncr[N+1][N+1];

int MOD = 1e9;

void precompute() {
    ncr[0][0] = 1;
    for(int i=1;i<=N;i++) {
        ncr[i][0] = 1;
        for(int j=1;j<=i;j++) {
            ncr[i][j] = (ncr[i-1][j] + ncr[i-1][j-1])%MOD; 
        }
    }
}
void solve() {
    int n;
    cin >> n;
    for(int i=0;i<=n;i++) {
        cout << ncr[n][i] << " ";
    }
    cout << "\n";
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