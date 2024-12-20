#include <bits/stdc++.h>
using namespace std;

/* Problem A
int main() {

    string s = "codesforces";
    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        char n; cin >> n;
        if (find(s.begin(), s.end(), n) != s.end()) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}*/

/* Problem B
int main() {

    int t; cin >> t;

    for (int i = 0; i < t; ++i) {
        int x = 0, y = 0;
        bool b = false;
        int l; cin >> l;
        string s; cin >> s;
        for (int j = 0; j < l; ++j) {
            if (s[j] == 'U') {y++;}
            else if (s[j] == 'D') {y--;}
            else if (s[j] == 'R') {x++;}
            else {x--;}
            if (x == 1 && y == 1) {b = true;}
        }
        if (b) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}*/

/* Problem C
int main() {

    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int l; cin >> l;
        string s; cin >> s;
        int c = 0;
        while ((s[c] == '0' && s[s.size()-1-c] == '1') || (s[c] == '1' && s[s.size()-1-c] == '0')) {
            l -= 2;
            c++;
            if (c == s.size()/2) {
                break;
            }
        }

        cout << l << "\n";
    }

    return 0;
}*/

/* Problem D
int main() {

    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int l; cin >> l;
        string s; cin >> s;
        int mx = 0;
        vector<char> aux;
        vector<char> aux2;
        bool b = false;
        for (int j = 0; j < l; ++j) {

            if (!b && find(aux.begin(),aux.end(),s[j]) == aux.end()) {
                aux.push_back(s[j]);
            } else {
                b = true;
                if (find(aux2.begin(),aux2.end(),s[j]) == aux2.end()) {
                    aux2.push_back(s[j]);
                }
            }



            /*string aux1 = s.substr(0, j);
            //string aux2 = s.substr(j, s.size()-j);

            unordered_set<char> s1;
            unordered_set<char> s2;
            for (int h = 0; h < j; h++) {
                s1.insert(s[h]);
            }
            for (int h = j; h < s.size(); h++) {
                s2.insert(s[h]);
            }
            int dif1 = s1.size();
            int dif2 = s2.size();
            mx = max(mx, dif1 + dif2);//

        }
        cout << aux.size() + aux2.size() << "\n";
    }



    return 0;
}*/

/* Problem E
int main() {

    int t; cin >> t;
    for (int i = 0; i < t; ++i) {
        int n; cin >> n;
        long long suma = 0;
        bool haycero = false;
        int menores = 0;
        int menorpositivo = 1e9, menornegativo = -1e9;
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            if (x == 0) {haycero = true;}
            if (x < 0) {menores++;}
            if (x < 0 && x > menornegativo) {menornegativo = x;}
            if (x > 0 && x < menorpositivo) {menorpositivo = x;}
            suma += abs(x);
        }

        if (menores % 2 == 0 || haycero) {
            //Every number can turn positive
        } else {
            if (abs(menorpositivo) < abs(menornegativo)) {
                suma -= 2*menorpositivo;
            } else {
                suma += 2*menornegativo;
            }
        }

        cout << suma << "\n";
    }

    return 0;
}*/


int main() {



    return 0;
}

/*
int main() {



    return 0;
}*/