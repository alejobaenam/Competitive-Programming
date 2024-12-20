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
    int n; cin >> n;
    string s; cin >> s;
    vector<char> vec;
    char last = '0';
    for (int i = 0; i < n-1; i+=2)
    {
        if (s[i] != s[i+1]) {
            if (s[i] == 'G' && last != 'b') {
                vec.pb('b');
                last = 'b';
            } else if (s[i] == 'H' && last != 'a') {
                vec.pb('a');
                last = 'a';
            }
        }
    }

    int index = vec.rend() - find(allr(vec), 'b');
    cout << index;
    
    /*for (int i = vec.size()-1; i >= 0; i--)
    {
        if (vec[i] == 'b') {
            cout << i+1;
            return;
        }
    }
    
    cout << 0;*/
    
}

int main()
{

    fast_cin();

    solve();

    return 0;
}