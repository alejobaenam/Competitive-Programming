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

    int x; int n; cin >> x >> n;

	set<int> lights{0, x};
	multiset<int> dist{x};
	for (int l = 0; l < n; l++) {
		
        int pos; cin >> pos;
        auto it1 = lights.upper_bound(pos);
		auto it2 = it1;
		--it2;

        // decompose in two numbers when i > 0
		dist.erase(dist.find(*it1 - *it2));
		dist.insert(pos - *it2);
		dist.insert(*it1 - pos);
		lights.insert(pos);

		auto ans = dist.end();
		cout << *(--ans) << " ";

	}

}

int main()
{

    fast_cin();

    solve();

    return 0;
}