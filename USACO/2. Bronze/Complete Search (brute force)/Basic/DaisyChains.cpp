#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=1060

    int n; cin >> n;
    double arr[n];
    for (int i = 0; i < n; ++i) {
        double x; cin >> x;
        arr[i] = x;
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        vector<double> vec;
        double suma = 0;
        for (int j = i; j < n; ++j) {
            vec.push_back(arr[j]);
            suma += arr[j];
            if (find(vec.begin(), vec.end(), suma/(j-i+1)) != vec.end()) {
                count++;
            }
        }
    }
    cout << count;

    return 0;
}