#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;

    cin >> s;

    int a = s[0] - 'a' + 1;
    int b = s[1] - 'a' + 1;

    if(b>a) {
        b -= 1;
    }
    cout << (a-1)*25 + b << "\n";
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