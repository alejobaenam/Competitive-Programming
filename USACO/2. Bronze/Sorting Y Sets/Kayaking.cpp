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

    //Link to the problem: https://codeforces.com/contest/863/problem/B

    int n; cin >> n;
    int arr[2*n];
    for (int i = 0; i < 2*n; ++i) {
        cin >> arr[i];
    }
    sort(arr, arr+(2*n));
    int mn = 2e9;
    for (int i = 0; i < (2*n)-1; ++i) {
        for (int j = i+1; j < 2*n; ++j) {

            int inst = 0;

            for (int k = 0; k < (2*n)-1; k += 2) {
                if (k == i || k == j) {
                    k--;
                } else if (k+1 == i || k+1 == j) {
                    inst += arr[k+2]-arr[k];
                    k++;
                } else {
                    inst += arr[k+1]-arr[k];
                }
            }

            //cout << "inst: " << inst << " ";
            //cout << i << j << nl;
            if (inst < mn) mn = inst;
        }
    }
    cout << mn;


    return 0;
}