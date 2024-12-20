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

bool canBeStacked(vint top, vint bottom) {

    return ((top[0] < bottom[0]) && (top[1] < bottom[1]));
}

void solve()
{
    int n; cin >> n;
    vector<vint> boxes;
    for (int i = 0; i < n; i++)
    {
        int x, y, z; cin >> x >> y >> z;
        boxes.pb({x,y,z});
    }

    sort(all(boxes));

    map<vint, int> heigths;
    for (int i = 0; i < n; i++)
    {
        heigths[boxes[i]] = boxes[i][2];
    }

    for (int i = 1; i < n; i++)
    {
        vint box = boxes[i];
        vector<vint> s;
        for (int j = 0; j < i; j++)
        {
            if (canBeStacked(boxes[j], box)) {
                s.pb(boxes[j]);
            }
        }
        int maximo = 0;
        for (int j = 0; j < s.size(); j++)
        {
            maximo = max(maximo, heigths[s[j]]);
        }
        heigths[box] = box[2] + max(maximo, 0);
    }
    int mayor = 0;
    for (auto [x,y]: heigths)
    {
        if (y > mayor) {
            mayor = y;
        }
    }
    
    cout << max(mayor, 0);
    
}

int main()
{

    fast_cin();

    solve();

    return 0;
}