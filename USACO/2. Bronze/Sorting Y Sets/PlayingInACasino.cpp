#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const char nl    = '\n';
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ff    first
#define ss    second
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define vint vector<int>


int main() {

    //Link to the problem: https://codeforces.com/contest/1808/problem/B

    #define int ll
    tc{
        int n,m; cin >> n >> m;
        map<int, vint> mapa;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int x; cin >> x;
                mapa[j].pb(x);
            }
        }

        vector<vint> vecfinal; //We order the data (columns in ascending order)
        for (auto s : mapa) {
            sort(all(s.ss));
            vecfinal.pb(s.ss);
        }

        int suma[n] = {0}; //Sum of every row ordered
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                suma[i] += vecfinal[j][i];
            }
        }

        int ans = 0;
        for (int i = 1; i < n; i++) {
            ans += i*suma[i];
        }
        for (int i = 1; i <= n; i++) {
            ans -= (n-i)*suma[i-1];
        }

        cout << ans << nl;
    }

    return 0;
}