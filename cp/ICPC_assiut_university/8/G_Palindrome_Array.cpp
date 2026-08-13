#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n/2;i++) {
        if(arr[i] != arr[n-i-1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}