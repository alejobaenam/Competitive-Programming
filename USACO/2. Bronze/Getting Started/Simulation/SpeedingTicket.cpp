#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=568

    //freopen("speeding.in", "r", stdin);
    //freopen("speeding.out", "w", stdout);

    int maximo = 0, n, m; cin >> n >> m;
    vector<int> arr1;
    vector<int> arr2;

    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        for (int j = 0; j < x; ++j) {
            arr1.push_back(y);
        }
    }
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        for (int j = 0; j < x; ++j) {
            arr2.push_back(y);
        }
    }

    for (int i = 0; i < 100; ++i) {
        maximo = max(maximo, arr2[i] - arr1[i]);

        /*if (arr2[i] - arr1[i] > maximo) {
            maximo = arr2[i] - arr1[i];
        }*/
    }

    cout << maximo;

    return 0;
}