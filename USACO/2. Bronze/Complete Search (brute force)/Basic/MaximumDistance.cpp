#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://codeforces.com/gym/102951/problem/A

    int n; cin >> n;
    int arrx[n];
    int arry[n];
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        arrx[i] = x;
    }
    for (int i = 0; i < n; ++i) {
        int y; cin >> y;
        arry[i] = y;
    }
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            int x = arrx[i] - arrx[j];
            int y = arry[i] - arry[j];
            mx = max((x*x)+(y*y), mx);
        }
    }
    cout << mx;

    return 0;
}