#include <bits/stdc++.h>
using namespace std;

int main() {

    //freopen("blist.in", "r", stdin);
    //freopen("blist.out", "w", stdout);

    int n; cin >> n;
    vector<int> vector1(1001);
    for (int i = 0; i < n; ++i) {
        int s, t, b; cin >> s >> t >> b;
        for (int j = s; j <= t; ++j) {
            vector1[j] += b;
        }
    }

    cout << *max_element(vector1.begin(), vector1.end());


    return 0;
}