#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int miniCnt = 0;
    int maxiCnt = 0;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
        if(arr[i] < mini) {
            miniCnt = 1;
            mini = arr[i];
        } else if(arr[i] == mini) {
            miniCnt++;
        }
        
        if(arr[i] > maxi) {
            maxiCnt = 1;
            maxi = arr[i];
        } else if(arr[i] == maxi) {
            maxiCnt++;
        }
    }
    if(maxi == mini ) {
        cout << 0 << " " << 1LL*maxiCnt*(maxiCnt-1)/2 << "\n";
        return;
    }
    cout << (maxi - mini) << " " << (1LL*maxiCnt * miniCnt) << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}