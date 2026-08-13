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

    for(int i=n-1;i>=0;i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}