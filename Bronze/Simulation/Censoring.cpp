#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=526

    //freopen("censor.in", "r", stdin);
    //freopen("censor.out", "w", stdout);

    string s; cin >> s;
    string t; cin >> t;

    //O(n) Solution ;)
    string aux;
    for (int i = 0; i < s.size(); ++i) {
        aux += s[i];

        if (aux.size() >= t.size() && aux.substr(aux.size()-t.size(), t.size()) == t) {
            aux.resize(aux.size() - t.size());
        }
    }

    cout << aux;

    /* Slower solution :(
    while(s.find(t) < s.size()) {
        s.replace(s.find(t), t.size(), "");
    }
    cout << aux;
    */

    return 0;
}