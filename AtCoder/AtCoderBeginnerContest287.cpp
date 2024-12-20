#include <bits/stdc++.h>
using namespace std;

/* problem A
int main() {

    int agree = 0;
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        if (s == "For") {
            agree++;
        }
    }
    if (agree > n/2) {
        cout<< "Yes";
    } else {
        cout<< "No";
    }

    return 0;
}*/


/* Problem B
int main() {

    int n, m; cin >> n >> m;
    string arr1[n];
    string match[m];
    for (int i = 0; i < n; ++i) {
        string x; cin >> x;
        arr1[i] = x.substr(3, 3);
    }
    for (int i = 0; i < m; ++i) {
        string x; cin >> x;
        match[i] = x;
    }
    int t = 0;
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            if (arr1[j] == match[i]) {
                t++;
                break;
            }
        }
    }

    cout<<t;


    return 0;
}*/