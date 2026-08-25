#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i%2==0) {
                cout << "#";
            } else {
                if(i%4 == 1 && j==m-1) {
                    cout << "#";
                } else if(i%4 == 3 && j==0) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}