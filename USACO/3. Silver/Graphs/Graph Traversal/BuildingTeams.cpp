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

vector<int> adj[100001];
bool visited[100001];
bool b = true;
int color[100001] = {0};

void dfs(int s, int c) {
    if (color[s] == 1 && c == 1 || color[s] == -1 && c == -1) b = false;
    
    if (visited[s]) return;
    visited[s] = true;
    
    // process node s
    if (color[s] == 0) color[s] = c*-1;
    for (auto u: adj[s]) {
        dfs(u, color[s]);
    }
}

void solve()
{

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (color[i]==0) dfs(i, -1);
    }

    if (b) {
        for (int i = 1; i <= n; i++)
        {
            if (color[i] == -1) cout << 2 << " ";
            else cout << color[i] << " ";
        }
        
    }
    else cout << "IMPOSSIBLE";
    
}

int main()
{

    fast_cin();

    solve();

    return 0;
}