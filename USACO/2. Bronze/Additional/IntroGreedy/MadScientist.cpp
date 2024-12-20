/****************************************************************************************************************
                                     ██████╗░░█████╗░██╗░░██╗██╗░░██╗██╗███╗░░██╗
                                     ██╔══██╗██╔══██╗██║░░██║██║░██╔╝██║████╗░██║
                                     ██████╔╝███████║███████║█████═╝░██║██╔██╗██║
                                     ██╔══██╗██╔══██║██╔══██║██╔═██╗░██║██║╚████║
                                     ██║░░██║██║░░██║██║░░██║██║░╚██╗██║██║░╚███║
                                     ╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝╚═╝╚═╝░░╚══╝
****************************************************************************************************************/
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

#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const char nl = '\n';
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ff first
#define ss second
#define tc    \
    ll t, k;  \
    cin >> t; \
    k = t;    \
    while (t--)
#define vint vector<int>
// #define int ll

void solve() {

    int n, temp = 0; cin >> n;
    string a, b; cin >> a >> b;
    bool ant_dif = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) {
            if (!ant_dif) {
                ant_dif = true;
                temp++;
            }
        } else {
            ant_dif = false;
        }
    }
    
    cout << temp;

}

int main()
{

    // freopen("breedflip.in", "r", stdin);
    // freopen("breedflip.out", "w", stdout);

    fast_cin();

    solve();

    /*tc {
        solve();
    }*/

    return 0;
}