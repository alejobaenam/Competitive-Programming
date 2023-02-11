#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://codeforces.com/problemset/problem/1555/B

    int t; cin >> t;
    while (t--) {
        int W, H; cin >> W >> H;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int w, h; cin >> w >> h;

        int x = max(W - x2, x1);
        int y = max(H - y2, y1);

        //Case 1: No space
        if (y2 - y1 + h > H && x2 - x1 + w > W) {
            cout << "-1" << "\n";
            continue;
        }
        //Case 4: Space in both directions
        if (y2 - y1 + h <= H && x2 - x1 + w <= W) {
            if (x >= w || y >= h){
                cout << 0 << "\n";
            } else {
                cout << min(w-x, h-y) << "\n";
            }
            continue;
        }
        //Case 2: Space in the height
        if (y2 - y1 + h <= H) {
            if (y >= h) {
                cout << 0 << "\n";
            } else {
                cout << h-y << "\n";
            }
            continue;
        }
        //Case 3: Space in the width
        if (x2 - x1 + w <= W) {
            if (x >= w) {
                cout << 0 << "\n";
            } else {
                cout << w-x << "\n";
            }
            continue;
        }

    }

    return 0;
}