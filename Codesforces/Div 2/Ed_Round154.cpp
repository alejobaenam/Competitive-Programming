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
//#define int ll


int main() {

    //ios::sync_with_stdio(0);
    //cin.tie(0);


    // Problema A
    /*tc{
        string num; cin >> num;
        vint primos = {13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
        bool bul = false;
        for (int j = 0; j < primos.size(); ++j) {
            for (int i = 0; i <= 7; ++i) {
                for (int k = i+1; k <= 8; ++k) {
                    //cout << primos[j]/10 << nl;
                    //cout << num[i] << ", " << primos[j]/10 << ": " << num[i+1] << ", " << primos[j]%10  << nl;
                    if (!bul && (num[i]-'0') == primos[j]/10 && (num[k]-'0') == primos[j]%10) {
                        cout << primos[j] << nl;
                        bul = true;
                        //break;
                    }
                }
            }
        }

        if (!bul) {
            cout << -1 << nl;
        }
    }*/



    // Problema B
    /*tc{
        string a; cin >> a;
        string b; cin >> b;
        vint ceros; vint unos;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == b[i]) {
                if (a[i] == '0') {
                    ceros.pb(i);
                } else {
                    unos.pb(i);
                }
            }
        }
        bool bul = false;
        for (int uno : unos) {
            for (int cero : ceros) {
                if (!bul && uno-cero == 1) {
                    cout << "YES" << nl;
                    bul = true;
                }
            }
        }
        if (!bul) {
            cout << "NO" << nl;
        }
    }*/


    // Problema C
    tc{
        string s; cin >> s;
        bool posibleorden = true;
        bool posibledesorden = false;
        bool bul = true;
        int contadorcero = 0;
        int ultimodigito;
        for (int i = 0; i < s.size(); ++i) {

            if (s[i] == '+') {
                posibledesorden = true;
            } else if (s[i] == '1') {
                if (posibleorden == true) {
                    posibledesorden = false;
                } else {
                    bul = false;
                    break;
                }
            } else if (s[i] == '0') {
                if (posibledesorden == true) {
                    posibleorden = false;
                } else {
                    bul = false;
                    break;
                }
            } else if (s[i] == '-') {
                posibleorden = true;
            }
            /*if (s[i] == '1') {
                contadorcero = 0;
            }*/
        }
        if (bul) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }

    return 0;
}