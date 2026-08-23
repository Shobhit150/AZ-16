#include <iostream>
#include <vector>
using namespace std;

void solve() {
    vector<int> arr = {1,3,3,5,2,5,3};
    int n = arr.size();
    int maxi = arr[0];
    int cnt = 1;
    int ft_occur = 0;
    int lt_occur = 0;
    for(int i=1;i<n;i++) {
        if(arr[i] == maxi) {
            cnt++;
            lt_occur = i;
        }
        if(arr[i] > maxi) {
            maxi = arr[i];
            cnt = 1;
            ft_occur = i;
            lt_occur = i;
        }
    }
}

k + 2k + .... n
n*n+1
int main() {

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}