#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i] > 0) arr[i] = 1;
        else if(arr[i] < 0) arr[i] = 2;
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
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