#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1083

    //freopen("shell.in", "r", stdin);
    //freopen("shell.out", "w", stdout);

    int t, n, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 1; i < n; i++){
        cin >> t;
        sum1 += t;
    }
    sum2 = (n*(n+1))/2; //Lo que debería dar
    cout << sum2-sum1; //Lo que falta para lo que debería dar


    /*
    int n; cin >> n;
    int v[n] = {0};
    for (int i = 1; i < n; i++) {
        int x; cin >> x;
        v[x-1] = x;
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            cout << i+1;
            return 0;
        }
    }
    */

}