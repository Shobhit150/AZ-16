#include <iostream>
#include <vector>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int arr[26] = {};
    for(int i=0;i<s.size();i++) {
        arr[s[i] - 'a']++;
    }
    for(int i=0;i<26;i++) {
        if(arr[i] > 0) {
            cout << char(i + 'a') << " : " << arr[i] << "\n";
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