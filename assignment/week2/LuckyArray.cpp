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
    int freq = 1;
    int mini = 0;
    for(int i=1;i<n;i++) {
        if(arr[i] == arr[mini]) {
            freq++;
        } else if(arr[i] < arr[mini]) {
            mini = i;
            freq = 1;
        }
    }
    if(freq%2 == 1) {
        cout << "Lucky\n";
    } else {
        cout << "Unlucky\n";
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