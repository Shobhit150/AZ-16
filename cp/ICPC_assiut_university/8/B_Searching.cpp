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

    int x;
    cin >> x;
    for(int i=0;i<n;i++) {
        if(arr[i] == x) {
            cout << i << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}