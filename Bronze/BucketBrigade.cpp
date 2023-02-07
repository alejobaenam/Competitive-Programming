#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=939

    //freopen("buckets.in", "r", stdin);
    //freopen("buckets.out", "w", stdout);

    int bx, by, lx, ly, rx, ry, t; //coordinates x, y and the total
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10; ++j) {
            char a; cin >> a;
            if (a == 'B') {
                bx = j; by = i;
            } else if (a == 'L') {
                lx = j; ly = i;
            } else if (a == 'R') {
                rx = j; ry = i;
            }
        }
    }

    t = abs(bx - lx) + abs(by - ly) - 1;
    if ((bx == lx) && (bx == rx) && (ry > by || ry > ly) && (ry < by || ry < ly)) {
        t += 2;
    }//If the rock is in the middle of the barn and lake (vertical)
    if ((by == ly) && (by == ry) && (rx > bx || rx > lx) && (rx < bx || rx < lx)) {
        t += 2;
    }//If the rock is in the middle of the barn and lake (vertical)

    cout<<t;

    return 0;
}