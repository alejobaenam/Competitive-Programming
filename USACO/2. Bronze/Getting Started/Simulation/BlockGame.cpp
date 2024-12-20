#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=664

    //freopen("blocks.in", "r", stdin);
    //freopen("blocks.out", "w", stdout);

    int n; cin >> n;
    array<char, 26> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    vector<int> def(26);
    vector<string> col1(n); //string col1[n];
    vector<string> col2(n); //string col2[n];

    for (int i = 0; i < n; ++i) {
        vector<int> frec1(26); //26 0's
        vector<int> frec2(26); //26 0's

        string s1; cin >> s1;
        col1[i] = s1;
        string s2; cin >> s2;
        col2[i] = s2;

        for (int k = 0; k < 26; ++k) {
            for (char j : col1[i]) {
                if (j == letters[k]) {
                    frec1[k]++;
                }
            }
            for (char j : col2[i]) {
                if (j == letters[k]) {
                    frec2[k]++;
                }
            }
            def[k] += max(frec2[k], frec1[k]);
        }
    }

    for (int i : def) {
        cout << i << "\n";
    }

    return 0;
}