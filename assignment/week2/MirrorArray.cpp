#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=m-1;j>=0;j--) {
            cout << arr[i][j] << " ";
        }
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