#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    for(int i=0;i<(2*n-1);i++) {
        for(int j=0;j<(2*n-1);j++) {
            if((j-i <= 0 && (i+j) <= (2*n-2)) || (i+j >= (2*n-2) && (i-j) <= 0)) {
                cout << "*";
            } else {
                cout << " ";
            }
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