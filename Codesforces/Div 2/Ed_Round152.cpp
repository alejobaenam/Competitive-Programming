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

    // Problema A
    /*tc{
        int b, c, h; cin >> b>>c>>h;
        cout << 2*(min(c+h, b-1))+1 << nl;
    }*/



    // Problema B
    tc{
        int n,k; cin >> n>>k;
        map<int, string> mapas;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x%k == 0) cout << to_string(i+1) << " ";
            else mapas[x%k] += to_string(i+1) + " ";
        }

        //iota(all(vec), 0);
        //stable_sort(all(vec));

        map<int, string>::reverse_iterator it;
        // rbegin() returns to the last value of map
        for (it = mapas.rbegin(); it != mapas.rend(); it++) {
            cout << it->second;
        }
        cout << nl;

    }



    // Problema C
    /*tc{
        int n; cin >> n;


    }*/


    return 0;
}