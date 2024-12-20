// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
// #pragma GCC optimize("unroll-loops")
/* #include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>*/

#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ff first
#define ss second
#define tc            \
    ll t, k;          \
    cin >> t; k = t;  \
    while (t--)
#define vint vector<int>
// #define int ll

void solve() {

    int k, n, ans = 0; cin >> k >> n;
    map<pair<int, int>, int> mapa;
    for (int i = 0; i < k; i++)
    {
        vint v1;
        for (int j = 0; j < n; j++)
        {
            int x; cin >> x;
            v1.push_back(x);
        }

        for (int j = 0; j < n-1; j++)
        {
            for (int l = j+1; l < n; l++)
            {
                mapa[make_pair(v1[j], v1[l])]++;
            }
        }
    }
    
    for (const auto &entry: mapa) {
        if (entry.ss == k) {
            ans++;
        }
        //std::cout << "{" << entry.ss << "}" << std::endl;
    }
    
    cout << ans;

}

int main() {

    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    fast_cin(); 

    solve();

    /*tc { 
     cout << "Case #" << k-t << ": "; 
        solve(); 
    }*/

    return 0;
}