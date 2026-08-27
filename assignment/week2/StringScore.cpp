#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i=0;
    int ans = 0;

    while(i<s.size()) {
        if(s[i] == 'V') ans += 5;
        else if(s[i] == 'W') ans += 2;
        else if(s[i] == 'Y') {
            i++;
            if(i<s.size()) {
                s.push_back(s[i]);
            }
        } else if(s[i] == 'X'){
            i++;
        } else {
            if(i+1 < s.size() && s[i+1] == 'V') {
                ans /= 5;
                i++;
            } else if(i+1 < s.size() && s[i+1] == 'W') {
                ans /= 2;
                i++;
            }
        }
        i++;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}