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
    //Tener una posicion fija y hacer el twosum
    int n, x; cin >> n >> x;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].ff;
        arr[i].ss = i+1;
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {
        int l = i+1, r = n-1;
        while (l < r) {
            if (arr[l].ff + arr[r].ff > x-arr[i].ff) {
                r--;
            } else if (arr[l].ff + arr[r].ff < x-arr[i].ff) {
                l++;
            } else {
                cout << arr[i].ss << " " << arr[l].ss << " " << arr[r].ss;
                return;
            }
        }

    }
    
    cout << "IMPOSSIBLE";

}

int main()
{

    fast_cin();

    solve();

    return 0;
}