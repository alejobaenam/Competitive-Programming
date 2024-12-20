#include <bits/stdc++.h>

using namespace std;

int main() {

    // freopen("lostcow.in", "r", stdin);
    // freopen("lostcow.out", "w", stdout);

    int x, y; cin >> x >> y;

    int vec0[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
    set<int> s1;
    set<int> s2;

    s1.insert({1, 4, 16, 64, 256, 1024});
    s2.insert({2, 8, 32, 128, 512, 2048});

    auto it = s1.lower_bound(abs(x-y));
    
    if (x > y) {
        it = s2.lower_bound(abs(x-y));
    }

    int temp = 0;
    for (int i = 0; i < 12; i++)
    {
        if (vec0[i] < (*it)) {
            if (i != 0) {
                temp += vec0[i] + vec0[i-1];
            } else {
                temp += vec0[i];
            }
        }
        if (vec0[i] == (*it) && i != 0) {
            temp += vec0[i-1];
        }
    }
    
    cout << temp + abs(x-y);

    return 0;
}