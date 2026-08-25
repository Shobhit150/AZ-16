#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;

    int arr[m] = {};
    for(int i=0;i<n;i++) {
        int a;
        cin >> a;
        if(a > m) continue;
        arr[a-1]++;
    }
    for(int i=0;i<m;i++) {
        cout << arr[i] << "\n";
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