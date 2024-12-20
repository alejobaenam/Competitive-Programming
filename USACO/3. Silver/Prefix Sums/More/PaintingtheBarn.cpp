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
    ll t;     \
    cin >> t; \
    while (t--)
#define vint vector<int>
//#define int ll

int prefix[1001][1001] = {};

void solve()
{
    int n, k; cin >> n >> k;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
        x1++;y1++;x2++;y2++;

        prefix[x1][y2]++; prefix[x2][y1]++;
        prefix[x2][y2]--; prefix[x1][y1]--;
    }
    
    for (int i = 1001; i >= 1; i--)
    {
        for (int j = 1; j <= 1001; j++)
        {
            // prefix row
            prefix[j][i] += prefix[j-1][i];
        }
    }

    for (int i = 1001; i >= 1; i--)
    {
        for (int j = 1; j <= 1001; j++)
        {
            // prefix col
            prefix[j][i] += prefix[j][i+1];
            
            if (prefix[j][i] == k) {
                temp++;
            }

            /*if (prefix[j][i] == -1) {
                cout << prefix[j][i] << " ";
            } else {
                cout << " " << prefix[j][i] << " ";
            }*/
            
        }
        //cout << "\n";
    }

    cout << temp;
   
}
 
int main()
{

    //Link to the problem: https://usaco.org/index.php?page=viewproblem2&cpid=919
    
    // freopen("paintbarn.in", "r", stdin);
    // freopen("paintbarn.out", "w", stdout);
 
    fast_cin();
 
    solve();
 
    return 0;
}