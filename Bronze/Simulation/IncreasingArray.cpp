#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1094

    long c = 0, n; cin >> n;
    vector<int> vector;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        vector.push_back(x);
    }
    for (int i = 0; i < n - 1; ++i) {
        while (vector[i] > vector[i+1]) {
            vector[i+1]++;
            c++;
        }
    }

    cout << c;

    return 0;
}