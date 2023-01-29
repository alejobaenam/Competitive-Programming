#include <bits/stdc++.h>
using namespace std;

int main() {

    //Link to the problem: http://www.usaco.org/index.php?page=viewproblem2&cpid=831

    //freopen("tttt.in", "r", stdin);
    //freopen("tttt.out", "w", stdout);

    vector<char> board(9);
    for (int i = 0; i < 9; ++i) { //filling the board
        char letter; cin >> letter;
        board[i] = letter;
    }

    vector<char> individual;
    //---up |left \ "
    if (find(individual.begin(), individual.end(), board[0]) == individual.end()) {
        if ((board[0] == board[1] && board[0] == board[2]) || (board[0] == board[3] && board[0] == board[6]) || (board[0] == board[4] && board[0] == board[8])) {
            individual.push_back(board[0]);
        }
    }

    // middle\ ---middle /
    if (find(individual.begin(), individual.end(), board[4]) == individual.end()) {
        if ((board[3] == board[4] && board[4] == board[5]) || (board[1] == board[4] && board[4] == board[7]) || (board[2] == board[4] && board[4] == board[6])) {
            individual.push_back(board[4]);
        }
    }

    // ---down |right
    if (find(individual.begin(), individual.end(), board[8]) == individual.end()) {
        if ((board[8] == board[7] && board[6] == board[8]) || (board[8] == board[5] && board[2] == board[8])) {
            individual.push_back(board[8]);
        }
    }

    cout << individual.size() << "\n"; //print the number of individual winners

    vector<pair<char, char>> winners; //Winners of two
    //---up
    if (board[0] == board[1] || (board[1] == board[2])) {
        winners.emplace_back(board[0], board[2]);
    } else if (board[0] == board[2]) {
        winners.emplace_back(board[0], board[1]);
    }
    //---middle
    if (board[3] == board[4] || (board[4] == board[5])) {
        winners.emplace_back(board[3], board[5]);
    } else if (board[3] == board[5]) {
        winners.emplace_back(board[3], board[4]);
    }
    //---down
    if (board[6] == board[7] || (board[6] == board[8])) {
        winners.emplace_back(board[7], board[8]);
    } else if (board[7] == board[8]) {
        winners.emplace_back(board[6], board[7]);
    }
    // |left
    if (board[0] == board[3] || (board[3] == board[6])) {
        winners.emplace_back(board[0], board[6]);
    } else if (board[0] == board[6]) {
        winners.emplace_back(board[0], board[3]);
    }
    // |middle
    if (board[1] == board[4] || (board[4] == board[7])) {
        winners.emplace_back(board[1], board[7]);
    } else if (board[1] == board[7]) {
        winners.emplace_back(board[1], board[4]);
    }
    // right|
    if (board[2] == board[5] || (board[5] == board[8])) {
        winners.emplace_back(board[2], board[8]);
    } else if (board[2] == board[8]) {
        winners.emplace_back(board[2], board[5]);
    }
    // \ "
    if (board[0] == board[4] || (board[0] == board[8])) {
        winners.emplace_back(board[4], board[8]);
    } else if (board[4] == board[8]) {
        winners.emplace_back(board[0], board[8]);
    }
    // /
    if (board[2] == board[4] || (board[4] == board[6])) {
        winners.emplace_back(board[2], board[6]);
    } else if (board[2] == board[6]) {
        winners.emplace_back(board[2], board[4]);
    }

    vector<pair<char, char>> winnersNoRep;
    for (int i = 0; i < winners.size(); ++i) { //We avoid duplicate teams
        if (winners[i].first != winners[i].second && find(winnersNoRep.begin(), winnersNoRep.end(), winners[i]) == winnersNoRep.end() && find(winnersNoRep.begin(), winnersNoRep.end(), make_pair(winners[i].second, winners[i].first)) == winnersNoRep.end()) {
            winnersNoRep.push_back(winners[i]);
        }
    }

    cout << winnersNoRep.size(); //print the number of group winners

    return 0;
}