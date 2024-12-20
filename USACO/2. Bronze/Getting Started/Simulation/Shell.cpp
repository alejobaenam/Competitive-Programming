#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() {

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    int n, a, b, g;
    cin >> n;

    vector<int> game1 = {1, 0, 0};
    int g1 = 0;
    vector<int> game2 = {0, 1, 0};
    int g2 = 0;
    vector<int> game3 = {0, 0, 1};
    int g3 = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        cin >> g;

        swap(game1[a-1], game1[b-1]);

        if (game1[g-1] == 1) {
            g1++;
        }


        swap(game2[a-1], game2[b-1]);

        if (game2[g-1] == 1) {
            g2++;
        }

        swap(game3[a-1], game3[b-1]);

        if (game3[g-1] == 1) {
            g3++;
        }

    }

    int max1 = max(g1, g2);
    cout<<max(max1, g3);

    return 0;
}