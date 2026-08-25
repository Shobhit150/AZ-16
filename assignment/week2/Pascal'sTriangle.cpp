#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int sp = (n-1)*2;
    for(int i=0;i<n;i++) {
        for(int j=0;j<sp;j++) {
            cout << " ";
        }
        int st = 1;
        for(int j=0;j<=i;j++) {  
            cout << st << "   "; // (n-r) / (r+1)
            st = st * (i-j) / (j+1);
        }
        sp -= 2;

        cout << "\n";
    }
}

int main() {

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}