#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //NO hecho

    //Link to the problem: http://usaco.org/index.php?page=viewproblem2&cpid=1228


    int n; cin >> n;
    vector<int> arrmin(n);
    vector<int> arrmax(n);
    for (int i = 0; i < n; ++i) {
        char gl; cin >> gl;
        int x; cin >> x;
        if (gl == 'G') {
            arrmin[i] = x;
            arrmax[i] = 1e9;
        } else {
            arrmin[i] = 0;
            arrmax[i] = x;
        }
    }

    int count = 0;

    /*for (int i = 0; i < n; ++i) {
        int liars = 0;
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                if (arrmin[i] == 0) {
                    if (arrmin[j] == 0) {
                        //liars++;
                    } else {
                        if (arrmax[i] >= arrmin[j]) {
                            //liars++;
                        } else {
                            liars++;
                        }
                    }
                } else {
                    if (arrmax[j] == 1e9) {
                        //liars++;
                    } else {
                        if (arrmin[i] <= arrmax[j]) {
                            //liars++;
                        } else {
                            liars++;
                        }
                    }
                }
            }
        }
        count = min(liars, count);
    }*/
    //cout << count;

    return 0;
}