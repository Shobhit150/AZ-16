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
    int n,m;
    cin >> n >> m;
    int arr1[n];
    int arr2[m];

    for(int i=0;i<n;i++) {
        cin >> arr1[i];
    }

    for(int i=0;i<m;i++) {
        cin >> arr2[i];
    }
    int i=0;
    int j=0;
    while(i<n && j<m) {
        if(arr1[i] == arr2[j]) {
            i++;
            j++;
        } else {
            i++;
        }
    }
    if(j==m) {
        cout << "YES\n"; 
    } else {
        cout << "NO\n"; 
    }
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