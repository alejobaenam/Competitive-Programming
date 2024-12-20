#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //no hecho

    long a, b; cin >> a >> b;
    long c = 0;

    while (max(a,b) % min(a,b) != 0) {
        if (max(a,b) / min(a,b) > 2) {
            c += max(a,b) / min(a,b);
            long t = min(a,b);
            b = max(a,b)-(t*(max(a,b)/t));
            a = t;
        }

        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
        c++;
        //cout << a << " "<< b << "\n";
    }

    c += max(a,b)/min(a,b);

    cout << c-1;

    return 0;
}