#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> arr(26,0);
    for(int i=0;i<k;i++) {
        char c;
        cin >> c;
        arr[c-'a'] = 1;
    }
    int curr = 0;
    int ans = 0;
    for(int i=0;i<n;i++) {
        if(arr[s[i] - 'a'] == 1) {
            curr++;
        } else {
            curr = 0;
        }
        ans += curr;
    }
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