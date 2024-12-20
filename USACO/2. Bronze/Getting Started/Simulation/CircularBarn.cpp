#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=616

    //freopen("cbarn.in", "r", stdin);
    //freopen("cbarn.out", "w", stdout);

    int n; cin >> n;
    int arr[n]; int num[n];
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        arr[i] = x;
        num[i] = i;
    }

    int min = 1e9; //int min_dist = INT32_MAX; int min_dist = (int) 2e9;
    for (int i = 0; i < n; ++i) {
        int suma = 0;
        for (int j = 0; j < n; ++j) {
            suma += arr[j] * num[j];
        }
        if (suma < min) {
            min = suma;
        }
        int last = num[n-1];
        for (int j = n-2; j >= 0; --j) {
            num[j+1] = num[j];
        }
        num[0] = last;
    }

    cout << min;

    return 0;
}