#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            ans = min(ans, arr[i] + arr[j] + j - i);
        }
    }
    cout << ans << "\n";
}

int main() {

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}