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

    #define int ll

    int n,m,k; cin >> n >> m >> k;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    multiset<int> st;
    for (int i = 0; i < m; ++i) {
        int x; cin >> x;
        st.insert(x);
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (*st.lower_bound(arr[i]-k) && *st.lower_bound(arr[i]-k) <= arr[i]+k && st.count(*st.lower_bound(arr[i]-k))) {
            ans++;
            //cout << *st.lower_bound(arr[i]-k) << " ";
            /*for (int s: st) {
                cout << s << ", ";
            }*/
            st.extract(*st.lower_bound(arr[i]-k));
        }
        //cout << nl;
    }
    cout << ans;


    return 0;
}