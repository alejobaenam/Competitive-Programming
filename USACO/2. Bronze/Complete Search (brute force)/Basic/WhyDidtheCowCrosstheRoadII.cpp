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

    map<char, vint> mapa;
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                  'k', 'l', 'm', 'n', 'o','p', 'q', 'r',
                  's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < 52; i++)
    {
        char x; cin >> x;
        mapa[(char) toupper(x)].push_back(i);
    }

    int temp = 0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if ((mapa[(char) toupper(letters[j])][0] > mapa[(char) toupper(letters[i])][0]) && (mapa[(char) toupper(letters[j])][1] > mapa[(char) toupper(letters[i])][1]) && (mapa[(char) toupper(letters[j])][0] < mapa[(char) toupper(letters[i])][1])) {
                temp++;
                //cout << (char) toupper(letters[j]) << "," << (char) toupper(letters[i]) << ":" ;
            }
        }
    }
    
    cout << temp;
    
}

int main() {

    // freopen("circlecross.in", "r", stdin);
    // freopen("circlecross.out", "w", stdout);

    //fast_cin();

    //

    solve();

    /*tc{
        solve();
    }*/

    return 0;
}