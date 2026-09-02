#include <bits/stdc++.h>
using namespace std;


#define int long long

using namespace std;

int binPow(int a, int b, int mod)
{
    if(b == 0)
        return 1;

    if(b%2 ==1)
    {
        return (a * binPow(a,b-1,mod) )%mod;
    }

    int result = binPow(a, b/2,mod);

    return (result * result)% mod;
}

signed main()
{

    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c,p;
        cin >> a >> b >> c >> p;
        int pow1 = b!= 0 ? binPow(b,c,p-1) : 1;
        int ans = a != 0 ? binPow(a, pow1, p) : 1;
        cout << ans << endl;
    }
    return 0;
}