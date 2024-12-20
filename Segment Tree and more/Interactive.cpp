#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
const int MOD = 1000000007;
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ff first
#define ss second
#define tc    \
    ll t;  \
    cin >> t; \
    while (t--)
#define vint vector<int>
// #define int ll

void solve()
{
    
    int l = 1, r = 1e6;
    while (l < r) {
        int m = (l+r+1)/2;
        cout << m << "\n";

        string res; cin >> res;
        if (res == ">=") {
            l = m;
        } else {
            r = m-1;
        }
    }

    cout << "! " << l << "\n";

}

int main() 
{

    solve();

    return 0;
}