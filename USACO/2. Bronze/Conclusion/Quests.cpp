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

void solve()
{
    int n, k; cin >> n >> k;
    int temporal = 0, maximo = 0, mayor = 0;
    int veca[n], vecb[n], maximohasta[n], sumahasta[n];

    for (int i = 0; i < n; i++)
    {
        cin >> veca[i];
        temporal += veca[i];
        sumahasta[i] = temporal;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> vecb[i];
        maximo = max(maximo, vecb[i]);
        maximohasta[i] = maximo;
    }
    for (int i = 0; i < min(n,k); i++)
    {
        int temp = sumahasta[i] + (k-i-1)*maximohasta[i];
        mayor = max(temp, mayor);
    }
    
    cout << mayor << "\n";
    
}

int main()
{

    fast_cin();

    tc {
        solve();
    }

    return 0;
}