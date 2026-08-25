#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

void solve() {

    string s;
    int n,q;
    cin >> n >> q;
    cin >> s;
    for(int i=0;i<q;i++) {
        string que;
        cin >> que;
        if(que == "substr") {
            int a,b;
            cin >> a >> b;
            cout << s.substr(a-1,(b-a+1)) << "\n";
        } else if(que == "sort") {
            int a,b;
            cin >> a >> b;
            sort(s.begin()+(a-1), s.begin()+(b));
        } else if(que == "pop_back") {
            s.pop_back();
        } else if(que == "back") {
            cout << s.back() << "\n";
        } else if(que == "reverse") {
            int a,b;
            cin >> a >> b;
            reverse(s.begin()+(a-1),s.begin()+(b));
        } else if(que == "front") {
            cout << s.front() << "\n";
        } else if(que == "push_back") {
            char c;
            cin >> c;
            s.push_back(c);
        } else if(que == "print") {
            int i;
            cin >> i;
            cout << s[i-1] << "\n";
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