#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1754

    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b; cin >> a >> b;
        int minimo = min(a, b);
        int maximo = max(a, b);

        if (((a+b) % 3 == 0) && (maximo - minimo <= minimo)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}