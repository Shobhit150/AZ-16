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
    int x;
    cin >> x;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(arr[i][j] == x) {
                cout << "will not take number\n";
                return;
            }
        }
    }
    cout << "will take number\n";

}

int main() {

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}