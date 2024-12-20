#include <bits/stdc++.h>
using namespace std;

int main() {

    //poco elegante

    //freopen("mixmilk.in", "r", stdin);
    //freopen("mixmilk.out", "w", stdout);

    int c1, m1; cin >> c1 >> m1;
    int c2, m2; cin >> c2 >> m2;
    int c3, m3; cin >> c3 >> m3;

    for (int i = 1; i <= 100; ++i) {
       if (i % 3 == 1) { //uno al 2
           if (c2 - m2 >= m1) {
               m2 += m1;
               m1 = 0;
           } else {
               m1 = m1 - (c2 - m2);
               m2 = c2;
           }
       } else if (i % 3 == 2) { //dos al 3
           if (c3 - m3 >= m2) {
               m3 += m2;
               m2 = 0;
           } else {
               m2 = m2 - (c3 - m3);
               m3 = c3;
           }

       } else { //3 al 1
           if (c1 - m1 >= m3) {
               m1 += m3;
               m3 = 0;
           } else {
               m3 = m3 - (c1 - m1);
               m1 = c1;
           }

       }

    }

    cout << m1 << "\n" << m2 << "\n" << m3;

    return 0;
}
