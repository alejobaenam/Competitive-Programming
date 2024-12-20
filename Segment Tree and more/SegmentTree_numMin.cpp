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
	vector<pair<int,int>> num_min;

	void init(int n) {
		size = 1;
		while (size < n) size *= 2;
		num_min.assign(2*size, {0, 0});
	}

	void build(vector<pair<int,int>> &a, int x, int lx, int rx) {
		if (rx - lx == 1) {
			if (lx < (int)a.size()) { 
				num_min[x] = a[lx];
				//num_min[x] = {a[lx], 1};
			}
			return;
		}
		int m = (lx + rx) / 2;
		build(a, 2*x+1, lx, m);
		build(a, 2*x+2, m, rx);
        //num_min[x] = min(num_min[2*x+1], num_min[2*x+2]);
        
		if (num_min[2*x+1].ff < num_min[2*x+2].ff) {
            num_min[x] = num_min[2*x+1];
        } else if (num_min[2*x+1].ff > num_min[2*x+2].ff) {
            num_min[x] = num_min[2*x+2];
        } else {
            num_min[x] = {num_min[2*x+1].ff, num_min[2*x+1].ss + num_min[2*x+2].ss};
        }

	}

	void build(vector<pair<int, int>> &a) {
		build(a, 0, 0, size);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if (rx-lx == 1) {
			num_min[x].ff = v;
            //num_min[x].ss = 1;
			return;
		}
		int m = (lx+rx)/2;
		if (i < m) {
			set(i, v, 2*x+1, lx, m);
		} else {
			set(i, v, 2*x+2, m, rx);
		}
		//num_min[x] = min(num_min[2*x+1], num_min[2*x+2]);
		
		if (num_min[2*x+1].ff < num_min[2*x+2].ff) {
            num_min[x] = num_min[2*x+1];
        } else if (num_min[2*x+1].ff > num_min[2*x+2].ff) {
            num_min[x] = num_min[2*x+2];
        } else {
            num_min[x] = {num_min[2*x+1].ff, num_min[2*x+1].ss + num_min[2*x+2].ss};
        }
	}

	void set(int i, int v) {
		set(i, v, 0, 0, size);
	}

	pair<int,int> num_minimo(int l, int r, int x, int lx, int rx) {
		if (lx >= r || l >= rx) return {INT_MAX,0};
		if (lx >= l && rx <= r) return num_min[x];
		int m = (lx + rx) / 2;
		pair<int,int> s1 = num_minimo(l, r, 2*x+1, lx, m);
		pair<int,int> s2 = num_minimo(l, r, 2*x+2, m, rx);
		//return min(s1, s2);
		
        if (s1.ff < s2.ff) {
            return s1;
        } else if (s1.ff > s2.ff) {
            return s2;
        } else {
            return {s1.ff, s1.ss+s2.ss};
        }
	}

	pair<int, int> num_minimo(int l, int r) {
		return num_minimo(l, r, 0, 0, size);
	}

};

void solve()
{
	int n, m; cin >> n >> m;
	vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
	{
		cin >> a[i].ff;
        a[i].ss = 1;
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
			int l, r; cin >> l >> r;
            // [l, r-1]
            pair<int, int> sol = st.num_minimo(l, r);
			cout << sol.ff << " " << sol.ss << "\n";
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