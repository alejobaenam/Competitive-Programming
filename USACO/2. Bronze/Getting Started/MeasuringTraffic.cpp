#include <bits/stdc++.h>
using namespace std;

int main() {

    //No hecho

    //freopen("traffic.in", "r", stdin);
    //freopen("traffic.out", "w", stdout);

    int n; cin >> n;
    vector<tuple<string, int, int> > vector1;
    for (int i = 0; i < n; ++i) {
        string ramp; int lower, upper; cin >> ramp >> lower >> upper;
        vector1.emplace_back(ramp, lower, upper);
    }

    for (int i = 1; i < n; ++i) { //Organizar los none consecutivo
        if (get<0>(vector1[i]) == get<0>(vector1[i-1]) && get<0>(vector1[i]) == "none") {
            int minimo = max(get<1>(vector1[i]), get<1>(vector1[i-1]));
            int maximo = min(get<2>(vector1[i]), get<2>(vector1[i-1]));
            get<1>(vector1[i]) = minimo; get<1>(vector1[i-1]) = minimo;
            get<2>(vector1[i]) = maximo; get<2>(vector1[i-1]) = maximo;
        }
    }

    int x, y, pos=0;
    for (int i = n-1; i >= 0; --i) {
        if (get<0>(vector1[i]) == "none") {
            x = get<1>(vector1[i]);
            y = get<2>(vector1[i]);
            pos = i;
            break;
        }
    }

    for (int i = pos; i >= 0; --i) {
        if (get<0>(vector1[i]) == "on") {
            if (x < get<2>(vector1[i])) {
                x = 0;
            } else {
                x -= get<2>(vector1[i]);
            }
            y -= get<1>(vector1[i]);
        } else if (get<0>(vector1[i]) == "off") {
            x += get<1>(vector1[i]);
            y += get<2>(vector1[i]);
        } else if (get<0>(vector1[i]) == "none") {
            x = max(get<1>(vector1[i]), x);
            y = min(get<2>(vector1[i]), y);
        }
    }

    cout << x << " " << y << "\n";

    for (int i = 0; i < n; ++i) {
        if (get<0>(vector1[i]) == "on") {
            x += get<1>(vector1[i]);
            y += get<2>(vector1[i]);
        } else if (get<0>(vector1[i]) == "off") {
            if (x < get<2>(vector1[i])) {
                x = 0;
            } else {
                x -= get<2>(vector1[i]);
            }
            y -= get<1>(vector1[i]);
        } else if (get<0>(vector1[i]) == "none") {
            x = max(get<1>(vector1[i]), x);
            y = min(get<2>(vector1[i]), y);
        }
    }

    cout << x << " " << y;

    return 0;
}



/*

#include <bits/stdc++.h>
using namespace std;


int main() {
    //freopen("traffic.in", "r", stdin);
    //freopen("traffic.out", "w", stdout);
    int N; cin >> N;
    string t[N]; int r[N][2];
    int a1=-99999; int a2=999999; int d1=-99999; int d2=999999;

    for (int i=0; i<N; i++) {
        string s; cin >> s;
        t[i]=s;
        int a, b; cin >> a >> b;
        r[i][0]=a; r[i][1]=b;
    }

    for(int i=N-1; i>=0; i--) {
        int a=r[i][0];
        int b=r[i][1];
        if (t[i]=="none") {
            a1 = max(a1, a);
            a2 = min(a2, b);
        } else if (t[i]=="on") {
            a1 -= b; a2 -= a;
        } else {
            a1 += a;
            a2 += b;
        }
        a1=max(a1,0);
        a2=max(a2,0);

    }

    for (int i=0; i<N; i++) {
        int a=r[i][0]; int b=r[i][1];
        if (t[i]=="none") {
            d1 = max(d1, a);
            d2 = min(d2, b);
        } else if (t[i]=="on") {
            d1 += a;
            d2 += b;
        } else {
            d1 -= b;
            d2 -= a;
        }
        d1=max(d1,0);
        d2=max(d2,0);

    }


    cout << max(0, a1) << " " << (a2)<< "\n";
    cout << d1 << " " << d2<< "\n";

    return 0;
}

*/