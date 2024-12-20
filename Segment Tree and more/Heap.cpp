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
// #define int ll

int siftUp(vector<int>& heap, int index) {
    while (index > 1 && heap[index] > heap[index / 2]) {
        swap(heap[index], heap[index / 2]);
        index /= 2;
    }
    return index;
}

int siftDown(vector<int>& heap, int index) {
    while (2 * index < (int)heap.size()) {
        int child = 2 * index;
        if (child + 1 < heap.size() && heap[child + 1] > heap[child]) {
            child += 1;
        }
        if (heap[child] > heap[index]) {
            swap(heap[child], heap[index]);
            index = child;
        } else {
            return index;
        }
    }
    return index;
}

int peek(vector<int>& heap) {
    return heap[1];
}

void insert(vector<int>& heap, int key) {
    heap.push_back(key);
    siftUp(heap, (int)heap.size() - 1);
}

int pop(vector<int>& heap) {
    int key = heap[1];
    swap(heap[1], heap.back());
    heap.pop_back();
    siftDown(heap, 1);
    return key;
}


void solve() {


    
}

int main()
{

    fast_cin();

    solve();

    return 0;
}