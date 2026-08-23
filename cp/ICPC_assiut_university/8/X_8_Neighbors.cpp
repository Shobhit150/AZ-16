#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

const ll MOD = 1e9 + 7;
const ll INF = 1e18;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll mod_add(ll a, ll b) { return (a % MOD + b % MOD) % MOD; }
ll mod_sub(ll a, ll b) { return (a % MOD - b % MOD + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a % MOD * b % MOD) % MOD; }

void solve() {
    int m,n;
    cin >> m >> n;
    char arr[m][n];
    for(int i=0;i<m;i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    int x,y;
    cin >> x >> y;
    int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int dy[] = {-1,  0,  1,-1, 1,-1, 0, 1};

    for(int j=0;j<8;j++) {
        int nx = x + dx[j] -1;
        int ny = y + dy[j]-1;
        if(nx<0 || ny <0 || nx ==m || ny==n) continue;
        if(arr[nx][ny] == '.') {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
}

int main() {
    fastio

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}