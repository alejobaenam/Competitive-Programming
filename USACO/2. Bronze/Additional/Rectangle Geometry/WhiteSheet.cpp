#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://codeforces.com/contest/1216/problem/C

    long long x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
    long long x3, y3, x4, y4; cin >> x3 >> y3 >> x4 >> y4;
    long long x5, y5, x6, y6; cin >> x5 >> y5 >> x6 >> y6;

    long long area_w = (x2 - x1) * (y2 - y1);

    long long area_w_area_b1 = max((long long) 0, min(x2, x4) - max(x1, x3)) * max((long long) 0, min(y2, y4) - max(y1, y3));

    long long area_w_area_b2 = max((long long) 0, min(x2, x6) - max(x1, x5)) * max((long long) 0, min(y2, y6) - max(y1, y5));

    long long area_b1_area_b2_area_w = max((long long) 0, min(x4, min(x6, x2)) - max(x3, max(x5, x1))) *
            max((long long) 0, min(y4, min(y6, y2)) - max(y3, max(y5, y1)));

    if (area_w - area_w_area_b1 - area_w_area_b2 + area_b1_area_b2_area_w > 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}