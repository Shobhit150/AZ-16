#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int mini = INT_MAX;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        mini = min(mini, arr[i]);
    }
    for(int i=0;i<n;i++) {
        if(arr[i] == mini) {
            cout << mini << " " << (i+1) << "\n";
            return;
        }
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