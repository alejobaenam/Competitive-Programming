#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=639

    //freopen("diamond.in", "r", stdin);
    //freopen("diamond.out", "w", stdout);

    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        arr[i] = x;
    }

    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int possible = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] >= arr[i] && arr[j] <= arr[i] + k) {
                possible++;
            }
        }
        mx = max(mx, possible);
    }
    cout << mx;

    return 0;
}