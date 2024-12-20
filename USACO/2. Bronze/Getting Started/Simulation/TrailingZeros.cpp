#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1618

    int n, t = 0;
    cin >> n;

    for (int i = 5; i <= n; i = i*5) {
        t += n / i;
    }

    cout << t;

    return 0;

}