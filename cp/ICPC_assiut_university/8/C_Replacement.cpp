#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >>arr[i];
    }

    for(int i=0;i<n;i++) {
        if(arr[i] > 0) {
            cout << "1 ";
        } else if(arr[i] == 0) {
            cout << "0 ";
        } else {
            cout << "2 ";
        }
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