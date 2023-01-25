#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; cin >> n;
    long x = 1;
    for (int i = 0; i < n; ++i) {
        x = (x * 2) % 1000000007;
    }
    cout << x;

}