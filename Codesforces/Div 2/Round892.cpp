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

    //Problem A
    /*tc{
        int n; cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int mn = *min_element(a, a+n);
        vector<int> b;
        vector<int> c;
        bool bul = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == mn) {
                b.pb(a[i]);
            } else {
                bul = true;
                c.pb(a[i]);
            }
        }
        if (bul) {
            cout << b.size() << " " << c.size() << nl;
            for (int i : b) {
                cout << i << " ";
            }
            cout << "\n";
            for (int i : c) {
                cout << i << " ";
            }
            cout << "\n";
        } else {
            cout << "-1" << nl;
        }

    }*/


    //#define int ll
    //Problem B
    /*tc {
        int n; cin >> n;
        int mnp = 2e9;
        int mns = 2e9;
        int total = 0;
        for (int i = 0; i < n; ++i) {
            int m; cin >> m;
            vector<int> vec;
            for (int j = 0; j < m; ++j) {
                int x; cin >> x;
                vec.pb(x);
            }

            sort(all(vec));
            if (vec[1] < mns) {
                mns = vec[1];
            }
            total += vec[1];
            if (vec[0] < mnp) {
                mnp = vec[0];
            }
        }
        total -= mns;
        total += mnp;
        cout << total << nl;
    }*/

    /*#define int ll
    //Problem C
    tc{
        int n; cin >> n;
        // int num = 0;
        int mejor = 0;
        for (int i = 0; i <= n; i++) {
            int total = (n-i-1)*(n-i)*(2*(n-i-1)+1)/6;
            //cout << total << nl;
            int mx = 0;
            int h = n;
            for (int j = n-i; j <= n; ++j) {
                total += (j*h);
                //cout << "i*n: " << i << " * " << n << " : " << i*n <<nl;
                if (j*h > mx) {
                    mx = j*h;
                }
                h--;
            }
            if (total-mx > mejor) {
                mejor = total-mx;
            }
        }

        cout << mejor << nl;

    }*/


    return 0;
}