#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const char nl    = '\n';
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ff    first
#define ss    second
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define vint vector<int>
//#define int ll

int main() {

    //Link to the problem: https://cses.fi/problemset/task/1640/
    //Utilizar metodo de two pointers

    int n,x; cin >> n >> x;
    pair<int,int> arr[n];
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        arr[i] = make_pair(a,i);
    }
    sort(arr, arr+n);

    int i = 0, j = n-1;
    while (i < j) {
        if (arr[i].first+arr[j].first > x) {
            j--;
        } else if (arr[i].first+arr[j].first < x) {
            i++;
        } else {
            cout << arr[i].second+1 << " " << arr[j].second+1;
            return 0;
        }
    }
    cout << "IMPOSSIBLE";

    return 0;
}