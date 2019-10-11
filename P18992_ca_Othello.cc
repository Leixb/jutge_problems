#include <bits/stdc++.h>
using namespace std;

bool recorre(const int& x, const int& y, vector<string>& taulell, const char& fitxa, const pair<int, int>& dir, int& blanques, int& negres, bool first=true) {
    int n = taulell.size();
    if (x < 0 or y < 0 or x >= n or y >= n) return false;

    if (first) return recorre(x+dir.first, y+dir.second, taulell, fitxa, dir, blanques, negres, false);

    if (taulell[x][y] == fitxa) return true;
    if (taulell[x][y] == '.') return false;

    if (recorre(x+dir.first, y+dir.second, taulell, fitxa, dir, blanques, negres, false)) {
        if (fitxa=='B') ++blanques, --negres, taulell[x][y]='B';
        else ++negres, --blanques, taulell[x][y]='N';
        return true;
    } else return false;
}

int main () {

    const vector<pair<int, int> > direccions = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1}, {0, 1},
        {1, -1}, {1, 0}, {1, 1}};

    int n;
    cin >> n;

    vector<string> taulell (n, string(n, '.'));
    int negres=2, blanques=2;
    taulell[n/2][n/2-1] = taulell[n/2-1][n/2] = 'N';
    taulell[n/2][n/2] = taulell[n/2-1][n/2-1] = 'B';

    for (int i=0; i < n; ++i) {
        for (int j=0; j < n; ++j) cout << taulell[i][j];
        cout << endl;
    }
    cout << negres << ':' << blanques << endl << endl;

    char fitxa;
    int x, y;
    while(cin >> fitxa >> x >> y) {
        --x, --y;
        taulell[x][y] = fitxa;
        (fitxa == 'B')? ++blanques : ++negres;
        for (const auto& dir: direccions) {
            recorre(x, y, taulell, fitxa, dir, blanques, negres);
        }

        for (int i=0; i < n; ++i) {
            for (int j=0; j < n; ++j) cout << taulell[i][j];
            cout << endl;
        }
        cout << negres << ':' << blanques << endl << endl;
    }
}
