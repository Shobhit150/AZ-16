#include <iostream>
#include <vector>
#include<string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if(s.size() <= 10) {
        cout << s << "\n";
    } else {
        cout << s[0] << s.size()-2 << s[n-1] << "\n";
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