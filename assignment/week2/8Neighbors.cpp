#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }
    int x,y;
    cin >> x >> y;
    int dirx[] = {0,0,1,1,1,-1,-1,-1};
    int diry[] = {1,-1,0,1,-1,0,1,-1};
    for(int i=0;i<8;i++) {
        int nx = (x-1) + dirx[i];
        int ny = (y-1) + diry[i];

        if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        // cout << arr[nx][ny] << " " << nx << " " << ny << "\n";
        if(arr[nx][ny] == '.') {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
}

int main() {

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}