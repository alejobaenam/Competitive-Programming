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

    // Problema A
    /*tc{
        int n; cin >> n;
        ll arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        ll min_dif = 2e9;
        for (int i = 0; i < n-1; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (arr[j]-arr[i] < min_dif) {
                    min_dif = arr[j]-arr[i];
                }
            }
        }
        if (min_dif < 0) {
            cout << 0 << nl;
        } else {
            cout << (int) ceil(double (min_dif+1)/2) << nl;
        }
    }*/



    // Problema B
    /*tc {
        int n, k; cin >> n >> k;
        int ans = 0;
        for (int i = n/2; i <= n; ++i) {
            int total = 0;
            int f = n;
            int f1 = i;
            int f2 = f-f1;
            while (f1+f2 == f && f >= f1 && f1 >= f2) {
                f = f1;
                f1 = f2;
                f2 = f-f1;
                total++;
                if (total == k-2) {
                    ans++;
                    break;
                }
            }
            //cout << total << nl;
        }
        cout << ans << nl;
    }*/


    return 0;
}