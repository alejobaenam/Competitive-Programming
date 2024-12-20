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

    int n, m, k;
    cin >> n >> m >> k;
    vint arreglo(n, -1);
    int pos[m], loskx[k], losky[k];
    bool b = false;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        pos[i] = x;
        if (x == 1)
        {
            b = true;
        }
    }
    int p = sizeof(pos) / sizeof(pos[0]);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        loskx[i] = x;
        arreglo[y - 1] = 1;
        losky[i] = y - 1;
        if (x == 1)
        {
            cout << y;
            return;
        }
    }
    vint visitados;
    int lb = 0, last = 0, dif = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // 1 in pos[]
            if (pos[j] == 1)
            {
                lb = j;
                if (last != 0)
                {
                    dif = lb - last - 1;
                }
                else
                {
                    dif = lb;
                }
            }
            // last in kx:
            if (count(loskx, loskx + k, pos[j]) && lb == 0)
            {
                last = j;
            }

            if (loskx[i] == pos[j])
            {

                int *targetPtr = find(&pos[0], pos + p, loskx[i]);
                // getting index from pointer
                int targetIndex = targetPtr - pos;
                int g = 0;
                for (int l = targetIndex; l >= 0; l--)
                {
                    if (!count(loskx, loskx + k, pos[l]))
                    {
                        // ocupado
                        while (arreglo[losky[i] - g] == 1 && !count(visitados.begin(), visitados.end(), pos[l]))
                        {
                            g++;
                        }
                        if (pos[l] == 1)
                        {
                            cout << losky[i] - g + 1;
                            return;
                        }
                        arreglo[losky[i] - g] = 1;
                        visitados.push_back(pos[l]);
                    }
                    g++;
                }
            }
        }
    }
    int temp = 0, indice = 0;
    if (count(loskx, loskx + k, pos[last]) && b)
    {
        int *targetPtr = find(&loskx[0], loskx + k, pos[last]);
        // getting index from pointer
        int targetIndex = targetPtr - loskx;
        indice = losky[targetIndex] - 1;
    }

    for (int i = max(0, indice); i < n; i++)
    {
        if (arreglo[i] == -1)
        {
            if (lb > last)
            {
                if (temp == dif)
                {
                    cout << i + 1;
                    return;
                }
            }
            else
            {
                cout << i + 1;
                return;
            }
            temp++;
        }
    }
}

int main()
{

    // freopen("milkorder.in", "r", stdin);
    // freopen("milkorder.out", "w", stdout);

    fast_cin();

    solve();

    return 0;
}