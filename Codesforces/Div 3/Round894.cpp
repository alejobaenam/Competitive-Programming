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
        int n, m; cin >> n >> m;
        char matriz[n][m];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> matriz[i][j];
            }
        }
        string vec = {'v', 'i', 'k', 'a'};
        int temp = 0;
        int u=0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                //cout << matriz[j][i]<< ", " << vec[u];
                if (matriz[j][i] == vec[u]) {
                    temp++;
                    u++;
                    break;
                }
            }
        }

        if (temp == 4) {
            cout << "YES" << nl;
        } else {
            //cout << temp;
            cout << "NO" << nl;
        }
    }*/


    //Problem B
    /*tc{
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        //int temp = 1;
        vector<int> vec;
        vec.pb(arr[0]);
        for (int i = 1; i < n; ++i) {
            if (arr[i-1] > arr[i]) {
                //temp++;
                vec.pb(arr[i]);
            }
            vec.pb(arr[i]);
        }
        cout << vec.size() << nl;
        for (int i : vec) {
            cout << i << " ";
        }
        cout << nl;
    }*/


    //Problem C
    tc{
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            cout << a[i] << ", ";
        }
        cout << nl;
        if (a[1] != n) {
            cout << "NO" << '\n';
            continue;
        }
        vector<int> b;
        for (int i = n; i >= 1; i--) {
            while (b.size() < a[i]) {
                b.push_back(i);
                cout << b.size() << ", " << a[i] << ".";
            }
        }
        bool meow = true;
        for (int i = 1; i <= n; i++) {
            if (a[i] != b[i - 1]) {
                cout << "NO" << '\n';
                meow = false;
                break;
            }
        }
        if (meow) {
            cout << "YES" << '\n';
        }

    }


    //Problem D
    /*tc{

    }*/


    //Problem E
    /*tc{

    }*/



    return 0;
}