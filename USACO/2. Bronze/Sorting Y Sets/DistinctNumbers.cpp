#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const char nl    = '\n';
#define all(x) x.begin(), x.end()
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define vint vector<int>

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1621

    vector<int> vec;
    tc{
        int n; cin >> n;
        vec.pb(n);
    }
    sort(all(vec));
    int ans = 0;
    int act = 0;
    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] != act) {
            ans++;
            act = vec[i];
        }
    }
    cout << ans;

    return 0;
}