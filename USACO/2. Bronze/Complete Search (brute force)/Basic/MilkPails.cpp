#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=615

    //freopen("pails.in", "r", stdin);
    //freopen("pails.out", "w", stdout);

    int x, y, m; cin >> x >> y >> m;
    int mx = 0;
    for (int i = 0; i <= m/x; ++i) {
        for (int j = 0; j <= m/y; ++j) {
            if (x*i + y*j <= m) {
                mx = max(mx, (x*i + y*j));
            } else {
                break;
            }
        }
    }
    cout << mx;

    return 0;
}