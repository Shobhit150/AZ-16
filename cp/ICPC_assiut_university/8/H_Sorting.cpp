#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }

    for(int i=0;i<n;i++) {
        int mini = arr[i];
        int idx = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < mini) {
                mini = arr[j];
                idx = j;
            }
        }
        swap(arr[idx], arr[i]);
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}