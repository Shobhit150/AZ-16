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

bool find(int n, int arr[], int x) {
    int l = 0;
    int r = n-1;
    while(l<=r) {
        int mid = (l+r) >> 1;
        if(arr[mid] == x) return true;
        else if (arr[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    return false;
}

void solve() {
    int n,q;
    cin >> n >> q;

    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    } 
    sort(arr, arr + n);
    for(int i=0;i<q;i++) {
        int a;
        cin >> a;
        if(find(n,arr,a)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
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