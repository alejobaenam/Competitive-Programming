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


    // Problema A
    /*tc{
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        int mx = 0;
        for (int i = 0; i < n-1; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (arr[j] - arr[i] < 0) {
                    if (arr[i] > mx) {
                        mx = arr[i];
                    }
                }
            }
        }
        cout << mx << nl;
    }*/


    // Problema B
    /*tc{
        #define int ll
        int n; cin >> n;
        int sumuno = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x == 1) {
                sumuno++;
            } else {
                sumuno = sumuno - (x-1);
            }
        }
        if (n == 1) {
            cout << "NO" << nl;
        } else if (sumuno <= 0) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }

    }*/



    // Problema C



    return 0;
}