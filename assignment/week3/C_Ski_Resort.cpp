#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,q;
    cin >> n >> k >> q;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    long long ans = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] <= q) {
            cnt++;
        } else {
            cnt = 0;
        }
        if(cnt >= k) {
            ans += (cnt-k+1);
        }
    }
    cout << ans << "\n";
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