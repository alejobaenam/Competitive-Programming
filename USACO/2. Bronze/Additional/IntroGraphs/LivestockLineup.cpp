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
    ll t, k;  \
    cin >> t; \
    k = t;    \
    while (t--)
#define vint vector<int>
// #define int ll

void solve()
{
    vector<string> adj[8];
    vector<string> visitados;
    map<string, int> mapa = {{"Beatrice", 0}, {"Belinda", 1}, {"Bella", 2},
    {"Bessie", 3}, {"Betsy", 4}, {"Blue", 5}, {"Buttercup", 6}, {"Sue", 7}};
    string orden[8] = {"Beatrice","Belinda","Bella","Bessie","Betsy","Blue","Buttercup","Sue"};
    
    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s_1, s_2;
        for (int j = 0; j < 6; j++)
        {
            string s; cin >> s;
            if (j == 0) s_1 = s;
            if (j == 5) s_2 = s;
        }

        adj[mapa[s_2]].pb(s_1);
        sort(adj[mapa[s_1]].begin(), adj[mapa[s_1]].end());
        adj[mapa[s_1]].pb(s_2);
        sort(adj[mapa[s_1]].begin(), adj[mapa[s_1]].end());
    }

    // Queremos hallar un camino.
    // Se imprimen nodos sin conexiones alfabeticamente hasta que lleguemos a uno
    // donde sea mayor que un nodo de inicio/fin. De ahi se arma el camino.
    int i = 0;
    while (adj[i].size() != 1) {
        if (adj[i].size() == 0) {
            visitados.push_back(orden[i]);
            cout << orden[i] << "\n";
        }
        i++;
    }
    int temp = i; string next;
    cout << orden[i] << "\n";
    visitados.push_back(orden[i]);
    while (visitados.size() != 8) {
        next = adj[i][0];
        if (adj[i].size() == 1) {
            if (find(all(visitados), next) == visitados.end()) {
                visitados.push_back(next);
                cout << next << "\n";
                i = mapa[next];

            } else {
                i = temp+1;
                while (adj[i].size() != 1 && i < 8) {
                    if (adj[i].size() == 0 && find(all(visitados), orden[i]) == visitados.end()) {
                        visitados.push_back(orden[i]);
                        cout << orden[i] << "\n";
                    }
                    i++;
                }
                
                if (i < 8 && adj[i].size() == 1 && find(all(visitados), orden[i]) == visitados.end()) {
                    visitados.push_back(orden[i]);
                    cout << orden[i] << "\n";
                }
                temp = i;
            }

        } else {
            if (find(all(visitados), next) != visitados.end()) {
                next = adj[i][1];
            }
            visitados.push_back(next);
            cout << next << "\n";
            i = mapa[next];
        }
    }
    
}

int main()
{

    // freopen("lineup.in", "r", stdin);
    // freopen("lineup.out", "w", stdout);

    fast_cin();

    solve();

    /*tc {
        solve();
    }*/

    return 0;
}