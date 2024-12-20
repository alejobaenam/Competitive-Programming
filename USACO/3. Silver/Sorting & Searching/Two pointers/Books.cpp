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
    /*
    int n, t; cin >> n >> t;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0, best = 0, curr = 0;
    while (l < n && r < n) {
        if (curr + arr[r] <= t) {
            curr += arr[r];
            ++r;
        } else {
            curr -= arr[l];
            ++l;
        }
        best = max(best, r-l);
    }
    cout << best;
    */
   
    int n, t; cin >> n >> t;
    int arr[n]; int prefix[n+1] = {};
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        prefix[i] = prefix[i-1] + arr[i];
    }
    
    int best = 0;
    for (int i = 1; i <= n; i++)
    {
        int index = lower_bound(prefix+i, prefix+n+1, t+prefix[i-1])-prefix;
        if (prefix[index] > t+prefix[i-1]) {
            --index;
        }
        index = min(n, index);
        //cout << index << " ";
        int temp = index - i + 1;
        best = max(best, temp);
    }
    
    cout << best;

}

int main()
{

    fast_cin();

    solve();

    return 0;
}