#include <bits/stdc++.h>
/*#include <iostream>
#include <string>
#include <cstring>
#include <vector>*/
using namespace std;

int main() {

    long long n; cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = (n * 3) + 1;
        }
    }
    cout << n << endl;

    return 0;

}
