#include <bits/stdc++.h>
using namespace std;

int main() {

    //freopen("word.in", "r", stdin);
    //freopen("word.out", "w", stdout);

    int n, k; cin >> n >> k;
    string s;
    int t = 0;

    for (int i = 0; i < n; ++i) {
        string w; cin >> w;
        if (t + w.size() > k) {
            s += "\n" + w;
            t = w.size();
        } else {
            if (i == 0) {
                s += w;
            } else {
                s += " " + w;
            }
            t += w.size();
        }
    }

    cout<<s;

    return 0;

}
