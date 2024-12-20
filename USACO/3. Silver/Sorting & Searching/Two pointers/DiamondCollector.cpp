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

    int n, k; cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);

    int finales[n];
    for (int i = 0; i < n; i++)
    {
        int index = upper_bound(arr, arr+n, k+arr[i])-arr;
        finales[i] = index-i;
        //cout << finales[i] << " ";
    }
    int best = 0;
    int seg[n];
    for (int i = n-2; i >= 0; i--)
    {
        best = max(best, finales[i+1]);
        seg[i] = best;
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, finales[i]+seg[finales[i]+i-1]);
    }

    cout << maxi;
    
}

int main()
{

    // freopen("diamond.in", "r", stdin);
    // freopen("diamond.out", "w", stdout);

    fast_cin();

    solve();

    return 0;
}