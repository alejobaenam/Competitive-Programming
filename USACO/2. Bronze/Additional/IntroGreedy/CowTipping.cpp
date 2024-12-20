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

void solve()
{

    int n, temp = 0;
    cin >> n;
    int matriz[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            if ((int)c - '0' == 0)
            {
                matriz[i][j] = -1;
            }
            else
            {
                matriz[i][j] = 1;
            }
        }
    }

    pair<int, int> last_1 = make_pair(-1, -1);
    bool b = true;
    while (b)
    {
        // 1
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matriz[i][j] == 1)
                {
                    last_1 = make_pair(i, j);
                }
            }
        }

        // 2
        bool cambio = false;
        for (int i = 0; i <= last_1.ff; i++)
        {
            for (int j = 0; j <= last_1.ss; j++)
            {
                matriz[i][j] *= (-1);
                cambio = true;
            }
        }

        // 3
        b = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matriz[i][j] == 1)
                {
                    b = true;
                }
            }
        }
        if (cambio)
        {
            temp++;
        }
    }

    cout << temp;
}

int main()
{

    // freopen("cowtip.in", "r", stdin);
    // freopen("cowtip.out", "w", stdout);

    fast_cin();

    solve();

    /*tc {
        solve();
    }*/

    return 0;
}