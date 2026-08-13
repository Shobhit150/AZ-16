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
    int n;
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int mini = INT_MAX;
    int maxi = INT_MIN;

    int idx1 = -1;
    int idx2 = -1;
    for(int i=0;i<n;i++) {
        if(arr[i] < mini) {
            mini = arr[i];
            idx1 = i;
        }
        if(arr[i] > maxi) {
            maxi = arr[i];
            idx2 = i;
        }
    }

    swap(arr[idx1], arr[idx2]);
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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