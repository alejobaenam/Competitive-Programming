#include <bits/stdc++.h>
using namespace std;

/*
int main() {

    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        int x, b; cin >> x >> b;
        cout << x+b << "\n";
    }



    return 0;
}*/

/*
int main() {

    int n, k; cin >> n >> k;
    vector<string> arr(k);
    for (int i = 0; i < n;++i) {
        string x; cin >> x;
        if (i < k) {
            arr[i] = x;
        }
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < k; ++i) {
        cout << arr[i] << "\n";
    }

    return 0;
}*/

//
int main() {

    int n, m; cin >> n >> m;
    vector<pair<int,int>> arr(m);
    for (int i = 0; i < m; ++i) {
        int x, y; cin >> x >> y;
        arr[i] = make_pair(x,y);
    }
    int c = 0;
    for (int i = 0; i < m-2; ++i) {
        for (int j = i+1; j < m; ++j) {
            if (arr[j].first == arr[i].first) {
                for (int k = j+1; k < m; ++k) {
                    if (arr[k].first == arr[i].second && arr[k].second == arr[j].second) {
                        c++;
                    } else if (arr[k].first == arr[j].second && arr[k].second == arr[i].second) {
                        c++;
                    }
                }
            } else if (arr[j].first == arr[i].second) {
                for (int k = j+1; k < m; ++k) {
                    if (arr[k].first == arr[i].first && arr[k].second == arr[j].second) {
                        c++;
                    } else if (arr[k].first == arr[j].second && arr[k].second == arr[i].first) {
                        c++;
                    }
                }
            } else if (arr[j].second == arr[i].first) {
                for (int k = j+1; k < m; ++k) {
                    if (arr[k].first == arr[i].second && arr[k].second == arr[j].first) {
                        c++;
                    } else if (arr[k].first == arr[j].first && arr[k].second == arr[i].second) {
                        c++;
                    }
                }
            } else if (arr[j].second == arr[i].second) {
                for (int k = j+1; k < m; ++k) {
                    if (arr[k].first == arr[i].first && arr[k].second == arr[j].first) {
                        c++;
                    } else if (arr[k].first == arr[j].first && arr[k].second == arr[i].first) {
                        c++;
                    }
                }
            }
        }
    }

    cout << c;

    return 0;
}//

/*
int main() {

    return 0;
}*/

/*
int main() {

    return 0;
}*/

/*
int main() {

    return 0;
}*/