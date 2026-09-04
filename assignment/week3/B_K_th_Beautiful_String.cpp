#include <bits/stdc++.h>
using namespace std;

#define int long long
void solve() {
    int n,k;
    cin >> n >> k;

    int a = 1;
    int b = 1;
    while (k > b) {
        a++;
        b += a;
    }

    int second = n-k+b-a;
    int first = n-a-1;
    if(second == n) {
        second = first + 1;
    }
    string ans(n,'a');
    // cout << (n-a-1) << " " << (n-k+b-a-1) << "\n";
    ans[first] = 'b';
    ans[second] = 'b';
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