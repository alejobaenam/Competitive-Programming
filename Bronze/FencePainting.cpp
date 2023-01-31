#include <bits/stdc++.h>
using namespace std;


int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=567

    //freopen("paint.in", "r", stdin);
    //freopen("paint.out", "w", stdout);

    int t = 0, a, b, c, d; cin >> a >> b >> c >> d;

    for (int i = 0; i <= 100; i++) {
        if (i >= a && i < b || i >= c && i < d) {
            t++;
        }
    }
    cout << t;

    return 0;

}