#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a = 0;
    int b = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            int c;
            cin >> c;
            if(i==j) a+=c;
            if(i+j == (n-1)) b += c;
        }
        // cout << a << " " << b << "₹";
    }
    // cout << a << " " << b << "\n";
    cout << abs(a-b) << "\n";
}

int main() {

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}