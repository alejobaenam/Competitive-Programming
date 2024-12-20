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

    //Problema A
    /*int t; cin >> t;
    while (t--) {
        int a, b, c; cin >> a >> b >> c;
        if ( a+b >= 10 || b +c >= 10 || a+c >= 10) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }*/



    // Problema B
    /*int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mx = 0;
        int l = 0;
        for (int i = 0; i < n; ++i) {
            int a, b; cin >> a >> b;
            if (a <= 10 && b > mx) {
                mx = b;
                l = i;
            }
        }
        cout << l+1 << "\n";
    }*/



    // Problema C
    /*int t; cin >> t;
    while (t--) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                char x; cin >> x;
                if (x != '.') {
                    cout << x;
                }
            }
        }
        cout << "\n";
    }*/



    // Problema D
    /*int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> vec;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            vec.pb(x);
        }
        sort(vec.begin(), vec.end());
        int ans = 1;
        int mx = 1;
        for (int i = 0; i < n-1; ++i) {
            if (vec[i+1]-vec[i] <= k) {
                ans++;
                //i++;
                mx = max(ans, mx);
            } else {
                ans = 1;
            }
        }
        if (n == 1) {
            cout << 0 << "\n";
        } else {
            cout << n - mx << "\n";
        }
        //cout << n - mx << "\n";
    }*/



    // Problema E
    /*
    int t; cin >> t;
    while (t--) {
        ll n, c; cin >> n >> c;
        ll amnis = 0;
        ll suum = 0;
        for (int i = 0; i < n; ++i) {
            ll x; cin >> x;
            amnis += (x*x);
            suum += x;
        }
        long double cx = amnis-c;
        long double ax = 4*n;
        long double bx = 4*suum;

        long double dentro = sqrt(bx*bx-4*ax*cx);
        long double abajo = 2*ax;
        ll w = (dentro-bx)/abajo;

        //cout << ax << ", " << bx << ", " << cx << nl;
        cout << w << nl;
    }*/



    // Problema F
    /*tc {
        int n; cin >> n;
        vector<int> vec(n+1);
        vector<int> a(n+1);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x <= n) vec[x]++;
        }
        //cout << "oñasjdopajs" << nl;
        for (int i = 1; i <= n; ++i) {
            int ans = 0;
            for (int j = i; j <= n; j+=i) {
                a[j] += vec[i];
            }
        }
        cout << *max_element(all(a)) << nl;

    }*/



    // Problema G
    /*tc{
        int n; cin >> n;
        map<ll, ll> map_y;
        map<ll, ll> map_x;
        map<ll, ll> map1;
        map<ll, ll> map_1;
        for (int i = 0; i < n; ++i) {
            ll x, y; cin >> x >> y;
            map_y[y]++;
            map_x[x]++;
            map1[x-y]++;
            map_1[x+y]++;
        }
        ll total = 0;
        for (auto x : map_y) {
            if (x.second > 1) {
                total+=x.second*(x.second-1);
            }
        }
        for (auto x : map_x) {
            if (x.second > 1) {
                total+=x.second*(x.second-1);
            }
        }
        for (auto x : map1) {
            if (x.second > 1) {
                total+=x.second*(x.second-1);
            }
        }
        for (auto x : map_1) {
            if (x.second > 1) {
                total+=x.second*(x.second-1);
            }
        }
        cout << total << nl;
    }*/

    return 0;
}