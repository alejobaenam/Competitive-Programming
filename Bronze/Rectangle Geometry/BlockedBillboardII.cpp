#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=783

    //freopen("billboard.in", "r", stdin);
    //freopen("billboard.out", "w", stdout);

    int lx1, ly1, lx2, ly2; cin >> lx1 >> ly1 >> lx2 >> ly2; //Getting the coordenates
    int ax1, ay1, ax2, ay2; cin >> ax1 >> ay1 >> ax2 >> ay2;

    int w, l;

    if (lx1 < ax1) {
        l = ly2 - ly1;
        if (lx2 <= ax1) {
            w = lx2 - lx1;
        } else if (lx2 <= ax2) {
            if (ly2 > ay2 || ly1 < ay1) {
                w = lx2 - lx1;
            } else {
                w = ax1 - lx1;
            }
        } else {
            w = lx2 - lx1;
        }
    } else if (lx1 >= ax1 && lx1 <= ax2) {
        if (lx2 <= ax2) {
            if (ly2 > ay2 && ly1 < ay1) {
                l = ly2 - ly1;
                w = lx2 - lx1;
            } else if (ly2 > ay2) {
                l = ly2 - ay2;
                w = lx2 - lx1;
            } else if (ly1 < ay1) {
                l = ay1 - ly1;
                w = lx2 - lx1;
            } else {
                w = 0;
                l = 0;
            }
        } else {
            l = ly2 - ly1;
            if (ly2 > ay2 || ly1 < ay1) {
                w = lx2 - lx1;
            } else {
                w = lx2 - ax2;
            }
        }
    } else {
        l = ly2 - ly1;
        w = lx2 - lx1;
    }


    /*
    if (lx1 < ax1) {
        if (lx2 <= ax1) {
            w = lx2 - lx1;
        } else if (lx2 <= ax2) {
            if (ly2 > ay2 || ly1 < ay1) {
                w = lx2 - lx1;
            } else {
                w = ax1 - lx1;
            }
        } else {
            w = lx2 - lx1;
        }
    } else if (lx1 >= ax1 && lx1 <= ax2) {
        if (lx2 <= ax2) {
            if (ly2 > ay2 || ly1 < ay1) {
                w = lx2 - lx1;
            } else {
                w = 0;
            }
        } else {
            if (ly2 > ay2 || ly1 < ay1) {
                w = lx2 - lx1;
            } else {
                w = lx2 - ax2;
            }
        }
    } else {
        w = lx2 - lx1;
    }


    if (ly1 < ay1) {
        if (ly2 <= ay1) {
            l = ly2 - ly1;
        } else if (ly2 <= ay2) {
            if (lx2 > ax2 || lx1 < ax1) {
                l = ly2 - ly1;
            } else {
                l = ay1 - ly1;
            }
        } else {
            l = ly2 - ly1;
        }
    } else if (ly1 >= ay1 && ly1 <= ay2) {
        if (ly2 <= ay2) {
            if (lx2 > ax2 || lx1 < ax1) {
                l = ly2 - ly1;
            } else {
                l = 0;
            }
        } else {
            if (lx2 > ax2 || lx1 < ax1) {
                l = ly2 - ly1;
            } else {
                l = ly2 - ay2;
            }
        }
    } else {
        l = ly2 - ly1;
    }*/

    cout << w*l;

    return 0;
}