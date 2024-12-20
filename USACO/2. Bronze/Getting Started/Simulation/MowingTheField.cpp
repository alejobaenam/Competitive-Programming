#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=593

    //freopen("mowing.in", "r", stdin);
    //freopen("mowing.out", "w", stdout);

    int n; cin >> n;
    vector<pair<int, int>> arr;
    vector<int> maxs;
    pair<int, int> pos = {0,0};
    arr.push_back(pos);
    for (int i = 0; i < n; ++i) {
        char direction; int step; cin >> direction >> step;

        for (int j = 0; j < step; ++j) {
            if (direction == 'N') {
                pos.second++;
            } else if (direction == 'S') {
                pos.second--;
            } else if (direction == 'E') { //oriente
                pos.first++;
            } else if (direction == 'W') { //Occidente
                pos.first--;
            }

            for (int k = 0; k < arr.size(); ++k) { //Check if the position has already been visited
                if (arr[k] == pos) {
                    maxs.push_back(int(arr.size()-k));
                }
            }

            arr.push_back(pos);
        }
    }

    if (maxs.empty()) {
        cout << -1;
    } else {
        cout << *min_element(maxs.begin(), maxs.end());
    }

    return 0;
}