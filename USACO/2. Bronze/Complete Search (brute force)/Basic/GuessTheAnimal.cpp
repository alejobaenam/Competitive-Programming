#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=893

    //freopen("guess.in", "r", stdin);
    //freopen("guess.out", "w", stdout);

    int n; cin >> n;
    map<string, vector<string>> m;
    vector<string> fs;

    while (n--) {
        string name; cin >> name;
        int k; cin >> k;
        while (k--) {
            string s; cin >> s;
            m[s].push_back(name);
        }
    }
    /*for (auto i: m) {
        if (i.second.size()==1) {
            m.erase(i.first);
        }
    }*/

    for (auto i: m) {
        if (i.second.size()>1) {
            for (int j = 0; j < i.second.size(); j++) {
                if (find(fs.begin(), fs.end(), i.second[j]) == fs.end()) {
                    fs.push_back(i.second[j]);
                }
            }
        }
    }
    /*
    for (auto i: m) {
        if (i.second.size()==1) continue;
        int subs=0;
        for (auto j: m) {
            if (i.first != j.first && j.second.size() > 1) {
                bool sub = true;
                for (int p=0; p<j.second.size(); p++) {
                    bool inside=false;
                    for (int q=0; q<i.second.size(); q++) {
                        if (j.second[p]==i.second[q]) {
                            inside = true;
                            break;
                        }
                    }
                    if (inside==false) sub = false;
                }
                if (sub) subs++;
            }
        }
    }*/

    for (auto i: m) {
        cout << i.first << ":";
        for (int j=0; j<i.second.size(); j++) {
            cout << i.second[j] << ", ";
        }
        cout << endl;
    }


    return 0;
}