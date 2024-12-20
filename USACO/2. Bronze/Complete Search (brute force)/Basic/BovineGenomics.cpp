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

    int n, m; cin >> n >> m;
    map<int, set<int>> mapa1;
    map<int, vint> mapa2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x; cin >> x;
            mapa1[j].insert(x);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x; cin >> x;
            mapa2[j].push_back(x);
        }
    }
    int temp = 0;
    for (int i = 0; i < m; i++)
    {
        bool b = true;
        for (int j = 0; j < n; j++)
        {
            //lo contiene
            if (mapa1[i].find(mapa2[i][j]) != mapa1[i].end()){
                b = false;
            }
        }
        if (b) {
            temp++;
        }
    }
    
    cout << temp;

}

int main() {

    // freopen("cownomics.in", "r", stdin);
    // freopen("cownomics.out", "w", stdout);

    fast_cin();

    //

    solve();

    /*tc{
        solve();
    }*/

    return 0;
}