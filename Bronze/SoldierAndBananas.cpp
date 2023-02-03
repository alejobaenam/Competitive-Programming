#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://codeforces.com/problemset/problem/546/A

    int k, n, w; cin >> k >> n >> w;

    if (k*(w*(w+1)/2) > n) {
        cout << k*(w*(w+1)/2) - n;
    } else {
        cout << 0;
    }

    return 0;
}