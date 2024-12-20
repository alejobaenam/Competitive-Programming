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
        int n,m,k,h; cin >> n >> m >> k >> h;
        vector<int> arr;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            arr.pb(x);
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                for (int l = j; l <= m; ++l) {
                    if (j != l && arr[i] != -1) {
                        if (abs(h - arr[i]) == k*abs(j-l)) {
                            ans++;
                            arr[i] = -1;
                        }
                    }
                }
            }
        }
        cout << ans << nl;
    }*/



    // Problema B
    /*tc{
        int n; cin >> n;
        vector<int> ordenado;
        int arrey[n];
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            ordenado.pb(x);
            arrey[i] = x;
        }
        sort(all(ordenado));
        bool bul = true;
        for (int i = 0; i < n; ++i) {
            if (arrey[i] % 2 != ordenado[i] % 2) {
                bul = false;
                break;
            }
        }
        if (bul) cout << "YES" << nl;
        else cout << "NO" << nl;
    }*/



    // Problema C
    /*tc{
        int n,k; cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int posi = 1e9;
        int posf = 0;
        int color = arr[0];
        int ans = 0;
        //bool alcanzai = false;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == color) {
                ans++;
            }
            if (ans == k) {
                //alcanzai = true;
                posi = i;
                break;
            }
        }
        color = arr[n-1];
        ans = 0;
        //bool alcanzaf = false;
        bool mismobloque = false;
        for (int i = n-1; i >= 0; i--) {
            if (arr[i] == color) {
                ans++;
                if (i == posi){
                    mismobloque = true;
                }
            }
            if (ans == k) {
                posf = i;
                //alcanzaf = true;
                break;
            }
        }
        if ((posi <= posf) || (posi == n-1 && n%k == 0) || mismobloque) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
        //cout << "posi: " << posi << " posf: " << posf << nl;

    }*/


    return 0;
}