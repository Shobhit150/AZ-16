#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

void solve() {
    string s;
    getline(cin, s);

    int n = s.size();
    int j=0;
    int i=0;
    while(i<n && s[i] == ' ') i++;
    for(;i<=n;i++) {
        if(i==n || s[i] == ' ') {
            reverse(s.begin()+j, s.begin()+i);
            j=i+1;
        }
    }
    i=0;
    bool first = true;
    while(i<n) {
        while(i<n && s[i] == ' ') {
            i++;
        }
        if(i==n) break;

        if(!first) {
            cout << " ";
        }

        while(i<n && s[i] != ' ') {
            cout << s[i];
            i++;
        }
        first = false;
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