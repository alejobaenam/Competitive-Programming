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

// Bubble Sort Algorithm
void bubbleSort(vint arr, int n)
{
    int i, j, temp = 0;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                temp++;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }

    cout << temp;
}

void solve()
{
    //Basically, count the number of swaps in the bubble sort algorithm
    int n, last_one = 0; cin >> n;
    vint vec1;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        if (last_one != x) {
            vec1.push_back(x);
        }
        last_one = x;
    }
    
    bubbleSort(vec1, vec1.size());
    
}

int main()
{

    // freopen("outofplace.in", "r", stdin);
    // freopen("outofplace.out", "w", stdout);

    fast_cin();

    solve();

    /*tc {
        solve();
    }*/

    return 0;
}