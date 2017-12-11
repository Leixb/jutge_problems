#include <bits/stdc++.h>
using namespace std;

struct Coord {
    int x, y;
};

int main () {
    for (int f, c; cin >> f >> c;) {
        vector <vector<char> > tauler (f, vector<char> (c, '%'));

        queue<Coord> Q;

        for (int i=0; i < f; ++i) {
            for (int j=0; j < c; ++j) {
                char casella;
                cin >> casella;
                if (tauler[i][j] == '%' or casella == 'F') {
                    tauler[i][j] = casella;
                    if (casella == 'F') {
                        tauler[i+1][j] = tauler[i][j+1] = tauler[i+1][j+1]
                            = tauler[i-1][j] = tauler[i][j-1] = tauler[i-1][j-1]
                            = tauler[i+1][j-1] = tauler[i-1][j+1] = 'X';
                    } else if (casella == 'P') Q.push({i, j});
                }
            }
        }

        bool found = false;

        while (!Q.empty() and !found) {
            const Coord pos = Q.front();
            Q.pop();
            if (tauler[pos.x][pos.y] == 'X') continue;
            if (tauler[pos.x][pos.y] == 'B') found = true;
            else {
                tauler[pos.x][pos.y] = 'X';
                Q.push({pos.x+1, pos.y});
                Q.push({pos.x-1, pos.y});
                Q.push({pos.x, pos.y+1});
                Q.push({pos.x, pos.y-1});
            }
        }

        cout << (found? "si" : "no") << endl;
    }
}
