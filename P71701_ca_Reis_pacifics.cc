#include <bits/stdc++.h>
using namespace std;

void mostra(const vector<vector<char> >& tauler) {
    const int& n = tauler.size()-2;
    for (int i=1; i <= n; ++i) {
        for (int j=1; j <= n; ++j)
            cout << tauler[i][j];
        cout << endl;
    }
    cout << "----------" << endl;
}

const vector<pair<int, int> > DIRECCIONS = {
    {-1, -1}, {-1,  0}, {-1, +1},
    { 0, -1},           { 0, +1},
    {+1, -1}, {+1,  0}, {+1, +1}
};

bool valid(const vector<vector<char> >& tauler, const int& f, const int& c) {
    for (const auto& dir : DIRECCIONS)
        if (tauler[f + dir.first][c + dir.second] == 'K') return false;
    return true;
}

void back(vector<vector<char> >& tauler, const int& r, const int& f=1, const int& c=-1) {
    if (r == 0) mostra(tauler);
    else {
        const int& n = tauler.size() - 2;
        for (int i = f; i <= n; ++i)
            for (int j = (i == f)? c+2 : 1; j <= n; ++j)
                if (valid(tauler, i, j)) {
                    tauler[i][j] = 'K';
                    back(tauler, r-1, i, j);
                    tauler[i][j] = '.';
                }
    }
}

int main () {
    int n, r;
    cin >> n >> r;

    vector <vector<char> > tauler (n+2, vector<char> (n+2, '.'));

    back(tauler, r);
}
