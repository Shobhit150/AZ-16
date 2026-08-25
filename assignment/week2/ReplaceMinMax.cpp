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
    int mini = 0;
    int maxi = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] > arr[maxi]) {
            maxi = i;
        }
        if(arr[i] < arr[mini]) {
            mini = i;
        }
    }
    swap(arr[mini], arr[maxi]);
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