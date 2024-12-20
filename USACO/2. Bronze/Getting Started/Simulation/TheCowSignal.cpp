#include <bits/stdc++.h>
using namespace std;

int main() {

    //freopen("cowsignal.in", "r", stdin);
    //freopen("cowsignal.out", "w", stdout);

    int m, n, k; cin >> m >> n >> k;
    char arr[n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            char x; cin >> x;
            arr[j] = x;
        }

        for (int h = 0; h < k; ++h) {
            for (int j = 0; j < n; ++j) {
                for (int l = 0; l < k; ++l) {
                    cout << arr[j];
                }
            }
            cout << "\n";
        }
    }

    return 0;
}