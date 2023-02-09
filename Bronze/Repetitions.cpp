#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1069

    int t = 1, maximo = 1;
    string s; cin >> s;
    for (int i = 0; i < s.size()-1; ++i) {
        if (s[i] == s[i+1]) {
            t++;
            maximo = max(maximo, t);
        } else {
            t = 1;
        }
    }
    cout << maximo;

    /*vector<int> a = {1}, c = {1}, g = {1}, t = {1};
    string s; cin >> s;

    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == 'A' && s[i-1] == 'A') {
            a.push_back(a[a.size()-1] + 1);
        } else {
            a.push_back(1);
        }

        if (s[i] == 'C' && s[i-1] == 'C') {
            a.push_back(c[c.size()-1] + 1);
        } else {
            c.push_back(1);
        }

        if (s[i] == 'G' && s[i-1] == 'G') {
            g.push_back(g[g.size()-1] + 1);
        } else {
            g.push_back(1);
        }

        if (s[i] == 'T' && s[i-1] == 'T') {
            t.push_back(t[t.size()-1] + 1);
        } else {
            t.push_back(1);
        }
    }

    int maxa = *max_element(a.begin(), a.end());
    int maxc = *max_element(c.begin(), c.end());
    int maxg = *max_element(g.begin(), g.end());
    int maxt = *max_element(t.begin(), t.end());

    cout<<max(max(maxa, maxc), max(maxg, maxt));*/

    return 0;
}