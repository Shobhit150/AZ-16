#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a;
    cin >> a;
    int sumi = 0;
    while(a) {
        sumi += (a%10);
        a /= 10;
    }
    cout << sumi << "\n";
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}