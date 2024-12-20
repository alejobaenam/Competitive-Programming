#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    int h, w; cin >> h >> w;

    for (int i = 0; i < h; ++i) {
        string s; cin >> s;

        for (int j = 1; j < w; ++j) {
            if (s[j] == s[j-1] && s[j] == 'T') {
                s[j] = 'C';
                s[j-1] = 'P';
                continue;
            }
        }

        cout << s << "\n";
    }

    return 0;
}