#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll;
typedef long double ld;
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

vector<int> adj[201];
int temp = 0;

void dfs(int s, vector<bool> &visited) {
    if (visited[s]) return;
    visited[s] = true;
    
    temp++;
    // process node s
    for (auto u: adj[s]) {
        dfs(u, visited);
    }
}

void solve()
{

    int n; cin >> n;
    vector<tuple<int,int,int>> inp;
    for (int i = 0; i < n; i++)
    {
        int x, y, p; cin >> x >> y >> p;
        inp.pb({x,y,p});
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int dx = get<0>(inp[i]) - get<0>(inp[j]);
            int dy = get<1>(inp[i]) - get<1>(inp[j]);
            int m = (dx*dx)+(dy*dy);
            ld r = sqrt(m);
            
            if (get<2>(inp[i])>=r) {
                adj[i].pb(j);
            }
            if (get<2>(inp[j])>=r) {
                adj[j].pb(i);
            }
        }
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        
        temp = 0;
        vector<bool> visited(201,false);
        dfs(i, visited);
        mx = max(mx, temp);
    }
    
    cout << mx;
    
}

int main()
{

    // freopen("moocast.in", "r", stdin);
    // freopen("moocast.out", "w", stdout);

    fast_cin();

    solve();

    return 0;
}