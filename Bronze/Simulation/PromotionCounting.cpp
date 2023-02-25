#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=591

    //freopen("promote.in", "r", stdin);
    //freopen("promote.out", "w", stdout);

    int bronzea, bronzed; cin >> bronzea >> bronzed;
    int plataa, platad; cin >> plataa >> platad;
    int oroa, orod; cin >> oroa >> orod;
    int platinioa, platiniod; cin >> platinioa >> platiniod;

    int bp, po, op;
    op = platiniod - platinioa;
    po = op + orod - oroa;
    bp = po + platad - plataa;

    cout<<bp<<"\n"<<po<<"\n"<<op;

    return 0;
}