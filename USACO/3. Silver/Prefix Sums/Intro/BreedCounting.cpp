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

void solve()
{
    int n, q; cin >> n >> q;
    ll prefix[n][3];
    int temp1 = 0, temp2 = 0, temp3 = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (x == 1) {
            temp1++;
        } else if (x == 2) {
            temp2++;
        } else {
            temp3++;
        }
        prefix[i][0] = temp1;
        prefix[i][1] = temp2;
        prefix[i][2] = temp3;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r; cin >> l >> r;
        if (l == 1) {
            cout << prefix[r-1][0] << " " << prefix[r-1][1] << " " << prefix[r-1][2] << "\n";
        } else {
            cout << prefix[r-1][0] - prefix[l-2][0] << " " << prefix[r-1][1]
             - prefix[l-2][1] << " " << prefix[r-1][2] - prefix[l-2][2] << "\n";
        }

    }
    
}
 
int main()
{
    
    //freopen("bcount.in", "r", stdin);
    //freopen("bcount.out", "w", stdout);
 
    fast_cin();
 
    solve();

    return 0;
}