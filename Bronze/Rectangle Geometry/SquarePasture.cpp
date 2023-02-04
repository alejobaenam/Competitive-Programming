#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=663

    //freopen("square.in", "r", stdin);
    //freopen("square.out", "w", stdout);

    int ax1, ay1, ax2, ay2; cin >> ax1 >> ay1 >> ax2 >> ay2; //Getting the coordenates
    int bx1, by1, bx2, by2; cin >> bx1 >> by1 >> bx2 >> by2;

    //Short way: print the maximum side pow of two (to form the square)
    cout << pow(max((max(ax2, bx2) - min(ax1, bx1)), (max(ay2, by2) - min(ay1, by1))), 2);


    /* Large way
     *
    left = min(ax1, bx1);
    right = max(ax2, bx2);
    bottom = min(ay1, by1);
    top = max(ay2, by2);

    int side = max(right - left, top - bottom);
    cout << side * side << endl;*/

    return 0;
}