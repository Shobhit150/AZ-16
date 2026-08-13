
#include <iostream>

#include<climits>
#include <vector>
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

    int cnt=  0;
    for(int i=0;i<n;i++) {
        if(arr[i] == mini) {
            cnt++;
        }
    }
    if((cnt&1) == 0) {
        cout << "Unlucky\n";
        return;
    }
    cout << "Lucky\n";
}

int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}