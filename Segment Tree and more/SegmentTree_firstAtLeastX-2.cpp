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
    ll t;     \
    cin >> t; \
    while (t--)
#define vint vector<int>
//#define int ll

struct segtree {
	int size;
	vector<int> mx;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		mx.assign(2*size, 0);
	}

	void build(vector<int> &a, int x, int lx, int rx) {
		if (rx - lx == 1) {
			if (lx < (int)a.size()) { 
				mx[x] = a[lx];
			}
			return;
		}
		int m = (lx + rx) / 2;
		build(a, 2*x+1, lx, m);
		build(a, 2*x+2, m, rx);
		mx[x] = max(mx[2*x+1], mx[2*x+2]);
	}

	void build(vector<int> &a) {
		build(a, 0, 0, size);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if (rx-lx == 1) {
			mx[x] = v;
			return;
		}
		int m = (lx+rx)/2;
		if (i < m) {
			set(i, v, 2*x+1, lx, m);
		} else {
			set(i, v, 2*x+2, m, rx);
		}
		mx[x] = max(mx[2*x+1], mx[2*x+2]);
	}

	void set(int i, int v) {
		set(i, v, 0, 0, size);
	}

	int maximo(int l, int r, int x, int lx, int rx) {
		if (lx >= r || l >= rx) return 2e9;
		if (lx >= l && rx <= r) return mx[x];
		int m = (lx + rx) / 2;
		int s1 = maximo(l, r, 2*x+1, lx, m);
		int s2 = maximo(l, r, 2*x+2, m, rx);
		return max(s1, s2);
	}

	int maximo(int l, int r) {
		return maximo(l, r, 0, 0, size);
	}

    int find(int l, int k, int x, int lx, int rx) {
        if (l >= rx || mx[x] < k) return -1;
        else if (rx-lx == 1 && mx[x] >= k) return lx;
        
        int m = (lx + rx) / 2;
        int res = find(l, k, 2*x+1, lx, m);
        if (res == -1) {
            res = find(l, k, 2*x+2, m, rx);
        }
        return res;

	}

	int find(int k, int l) {
        if (mx[0] < k) {
            return -1;
        }
		return find(l, k, 0, 0, size);
	}

};

void solve()
{
	int n, m; cin >> n >> m;
	vector<int> a(n);
    for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	segtree st;
	st.init(n);
	st.build(a);
	while (m--) {
		int op; cin >> op;
		if (op == 1) {
			int i, v; cin >> i >> v;
			st.set(i, v);
		} else {
			int x, l; cin >> x >> l;
			cout << st.find(x, l) << "\n";
		}
	}
	
}
 
int main()
{
    
    fast_cin();
 
    solve();
 
    /*tc {
        solve();
    }*/
 
    return 0;
}