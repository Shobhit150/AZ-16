#include <bits/stdc++.h>
using namespace std;

#define int long long

int binpow(int a, int b, int mod) {
    int res = 1;
    while(b) {
        if(b%2==1) res = (res*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return res;
}
int eval(int a, int b, string s, int mod) {
    if(s=="*") {
        return (1LL*a*b)%mod;
    } else if(s=="/") {
        return (a * binpow(b,mod-2,mod))%mod;
    } else if(s=="+") {
        return (a+b)%mod;
    } else {
        return (a-b+mod)%mod;
    }
    return -1;
}
void solve() {
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    string s3;
    cin >> s3;
    string s4;
    cin >> s4;
    string s5;
    cin >> s5;
    string s6;
    cin >> s6;
    string s7;
    cin >> s7;

    s1 = s1.substr(1,s1.size()-1);
    s5 = s5.substr(0,s5.size()-1);
    int a = stoi(s1);
    string op1 = s2;
    int b = stoi(s3);
    string op2 = s4;
    int c = stoi(s5);
    int p = stoi(s7);
    int res = -1;
    if(op1 == "/" || op1 == "*") {
        res = eval(a,b,op1,p);
        res = eval(res,c,op2,p);
    } else {
        res = eval(b,c,op2,p);
        res = eval(a,res,op1,p);
    }
    cout << (res+p)%p << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}