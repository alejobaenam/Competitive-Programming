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

    int c = 0, vec[3]; cin >> vec[0] >> vec[1] >> vec[2];
    sort(vec, vec+3);
    int mayor = vec[2], medio = vec[1], menor = vec[0];

    if (mayor - menor == 2) {
        // min and max
        cout << 0 << "\n" << 0;
    } else if (mayor - medio == 1 || medio - menor == 1){
        // min
        if (mayor-menor > 3) {
            cout << 2 << "\n";
        } else {
            cout << 1 << "\n";
        }

        //max
        cout << mayor-menor-2;
    } else {
        //min
        if (mayor - medio == 2 || medio - menor == 2) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
        
        //max
        cout << max(mayor - medio, medio - menor) - 1;
    }

}

int main() {

    // freopen("herding.in", "r", stdin);
    // freopen("herding.out", "w", stdout);

    fast_cin();

    solve();

    return 0;
}