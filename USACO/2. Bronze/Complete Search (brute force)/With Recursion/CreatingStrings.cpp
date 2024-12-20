/*#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
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
//#define int ll
 
void solve()
{
    string s; cin >> s;
    vector<string> final;
    sort(all(s));
    int n = s.size();

    map<string, bool> visitados;
    do {
        final.pb(s);
        visitados[s] = true;
    } while (next_permutation(all(s)));
    
    cout << final.size() << "\n";
    for (auto i: final)
    {
        cout << i << "\n";
    }
 
}
 
int main()
{
 
    fast_cin();
 
    solve();
 
    return 0;
}*/
 
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
//#define int ll
 
string s; int n; map<vector<char>, bool> visitados;
vector<char> permutation; vector<bool> chosen; vector<string> final;

void search() {
    if (permutation.size() == n) {
        if (!visitados[permutation]) {
            string str(all(permutation));
            final.pb(str);
            visitados[permutation] = true;
        }

    } else {
        for (int i = 0; i < n; i++) {
            if (chosen[i]) continue;
                chosen[i] = true;
                permutation.push_back(s[i]);
                search();
                chosen[i] = false;
                permutation.pop_back();
        }
        
    }
}
 
 
void solve()
{
    cin >> s;
    chosen.resize(s.size());
    sort(all(s));
    n = s.size();
    search();

    cout << final.size() << "\n";
    for (auto i: final)
    {
        cout << i << "\n";
    }
 
}
 
int main()
{
    
    fast_cin();
 
    solve();
 
    return 0;
}