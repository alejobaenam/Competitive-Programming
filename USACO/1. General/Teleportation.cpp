#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=807

    //freopen("teleport.in", "r", stdin);
    //freopen("teleport.out", "w", stdout);

    int a, b, x, y; cin >> a >> b >> x >> y;

    int c1 = abs(a - b);
    int c2 = abs(a - x) + abs(b - y);
    int c3 = abs(a - y) + abs(b - x);

    cout<< min(min(c2, c3), c1);

    return 0;
}