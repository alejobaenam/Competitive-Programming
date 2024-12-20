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

int m; int minimum = 1e9;
vector<tuple<int, int, int, int>> subset; 
vector<tuple<int, int, int>> vec_n; 
vector<tuple<int, int, int, int>> vec_m;

void search(int k = 0) {
    if (k == m) {
        vector<int> vec(100);
        int temp = 0;
        for (int i = 0; i < subset.size(); i++)
        {
            for (int j = get<0>(subset[i]); j <= get<1>(subset[i]); j++)
            {
                vec[j] += get<2>(subset[i]);
            }
            temp += get<3>(subset[i]);
        }
        
        //Verificar si se cumplen las condiciones:
        bool cumple = true;
        for (int i = 0; i < vec_n.size(); i++)
        {
            for (int j = get<0>(vec_n[i]); j <= get<1>(vec_n[i]); j++)
            {
                if (vec[j] < get<2>(vec_n[i])) {
                    cumple = false;
                    break;
                }
            }
        }
        
        if (cumple) {
            minimum = min(minimum, temp);
        }        

    } else {
        search(k+1);
        subset.push_back(vec_m[k]);
        search(k+1);
        subset.pop_back();
    }
}
 
void solve()
{
    int n; cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int s, t, c; cin >> s >> t >> c;
        vec_n.pb(make_tuple(s,t,c));
    }
    for (int i = 0; i < m; i++)
    {
        int a, b, p, m; cin >> a >> b >> p >> m;
        vec_m.pb(make_tuple(a,b,p,m));
    }
    
    search();
    cout << minimum;
    
}
 
int main()
{
    
    fast_cin();
 
    solve();
 
    return 0;
}