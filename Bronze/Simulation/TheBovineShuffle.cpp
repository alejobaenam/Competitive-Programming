#include <bits/stdc++.h>
using namespace std;

int main() {

    //freopen("shuffle.in", "r", stdin);
    //freopen("shuffle.out", "w", stdout);

    int n; cin >> n;
    vector<int> vector1(n+1);
    vector<int> vector2(n+1);
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        vector1[i] = x;
    }
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        vector2[i] = x;
    }
    int vector3[n+1];
    for (int j = 0; j < 3; ++j) {
        for (int i = 1; i < n+1; ++i) {
            vector3[i] = vector2[vector1[i]];
        }
        for (int i = 1; i <= n; ++i) {
            vector2[i] = vector3[i];
        }
    }

    for (int i = 1; i <= n; ++i) {
        cout << vector3[i] << "\n";
    }


}