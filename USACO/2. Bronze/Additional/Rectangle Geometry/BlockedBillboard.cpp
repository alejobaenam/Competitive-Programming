#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=759

    //freopen("billboard.in", "r", stdin);
    //freopen("billboard.out", "w", stdout);

    int ax1, ay1, ax2, ay2; cin  >> ax1 >> ay1 >> ax2 >> ay2; //Getting the coordenates
    int bx1, by1, bx2, by2; cin  >> bx1 >> by1 >> bx2 >> by2;
    int tx1, ty1, tx2, ty2; cin  >> tx1 >> ty1 >> tx2 >> ty2;

    int area = ((ax2 - ax1) * (ay2 - ay1)) + ((bx2 - bx1) * (by2 - by1)); //area of the two billboards
    int inters = 0;  //Amount of intersection with the truck

    //Large way
    if (tx2 > ax1 && tx1 < ax2 && ty2 > ay1 && ty1 < ay2) {
        inters += ((min(tx2, ax2) - max(tx1, ax1)) * (min(ty2, ay2) - max(ty1, ay1)));
    }
    if (tx2 > bx1 && tx1 < bx2 && ty2 > by1 && ty1 < by2) {
        inters += ((min(tx2, bx2) - max(tx1, bx1)) * (min(ty2, by2) - max(ty1, by1)));
    }

    /* Short way
    inters += max(0, min(ax2, tx2) - max(ax1, tx1)) * max(0, min(ay2, ty2) - max(ay1, ty1));
	inters += max(0, min(bx2, tx2) - max(bx1, tx1)) * max(0, min(by2, ty2) - max(by1, ty1));
    */

    cout << area - inters; //Area remaining visible

    return 0;
}



/* Another solution
 *
 *
#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    int area() {
        return (y2 - y1) * (x2 - x1);
    }
};

int intersect(Rect p, Rect q) {
    int xOverlap = max(0, min(p.x2, q.x2) - max(p.x1, q.x1));
    int yOverlap = max(0, min(p.y2, q.y2) - max(p.y1, q.y1));
    return xOverlap * yOverlap;
}

int main() {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    Rect a, b, t;  // billboards a, b, and the truck
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;
    cin >> t.x1 >> t.y1 >> t.x2 >> t.y2;
    cout << a.area() + b.area() - intersect(a, t) - intersect(b, t) << endl;
}*/