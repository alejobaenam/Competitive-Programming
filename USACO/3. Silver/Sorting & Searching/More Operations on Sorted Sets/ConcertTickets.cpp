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

    int n, m; cin >> n >> m;
    multiset<int> mset;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mset.insert(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x; cin >> x;
        auto index = mset.lower_bound(x);
        
        if (!mset.size()) {
            cout << -1 << "\n";
            continue;
        }
        
        if (index == mset.end()) {
            auto it = index;
            it--;
            if (*it <= x) {
                cout << *it << "\n";
                mset.erase(mset.find(*it));
            } else {
                cout << -1 << "\n";
            }

        } else if (index == mset.begin()) {
            if (*index <= x) {
                cout << *index << "\n";
                mset.erase(mset.find(*index));
            } else {
                cout << -1 << "\n";
            }

        } else if (*index <= x) {
            cout << *index << "\n";
            mset.erase(mset.find(*index));

        } else if (*index > x) {
            auto it = index;
            it--;
            if (*it <= x) {
                cout << *it << "\n";
                mset.erase(mset.find(*it));
            } else {
                cout << -1 << "\n";
            }

        }
    }

    /*
    cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> h;
		tickets.insert(h);
	}
	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
    */
    
}

int main()
{

    fast_cin();

    solve();

    return 0;
}