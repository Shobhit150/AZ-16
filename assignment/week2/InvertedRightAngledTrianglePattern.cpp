#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++) {
        for(int j=(n-i-1);j>=0;j--) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}