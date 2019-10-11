#include <bits/stdc++.h>
using namespace std;

struct Cell {
    int contingut; // nombre de chips
    string veins; // descripció de les posicions veines accessibles
};

struct Despl {
    short x, y;
};

typedef vector< vector<Cell> > Joc;

void populate_stack(stack<Despl>& S, const string& s) {
    for (size_t i = 0; i+1 < s.size(); i += 2) {
        string dir = {s[i], s[i+1]};
        if      (dir == "NW") S.push({-1, -1});
        else if (dir == "NN") S.push({-1,  0});
        else if (dir == "NE") S.push({-1, +1});
        else if (dir == "WW") S.push({ 0, -1});
        else if (dir == "EE") S.push({ 0, +1});
        else if (dir == "SW") S.push({+1, -1});
        else if (dir == "SS") S.push({+1,  0});
        else if (dir == "SE") S.push({+1, +1});
    }
}

int main () {
    int n;
    cin >> n;
    Joc mat (n, vector<Cell>(n));

    for (int i=0; i < n; ++i)
        for (int j=0; j < n; ++j)
            cin >> mat[i][j].contingut;

    for (int i=1; i < n-1; ++i)
        for (int j=1; j < n-1; ++j)
            cin >> mat[i][j].veins;

    const Joc original = mat;

    int chips_fora = 0;
    bool canvis = false;

    for (int j=1; j < n-1; ++j) 
        for (int i=1; i < n-1; ++i) {
            if (mat[i][j].contingut == 0) continue;
            if (int(mat[i][j].veins.size()) > mat[i][j].contingut*2) continue;

            canvis = true;

            stack<Despl> q;
            populate_stack(q, mat[i][j].veins);

            mat[i][j].contingut -= q.size();

            while (!q.empty()) {
                const Despl top = q.top();
                q.pop();
                ++mat[i+top.x][j+top.y].contingut;
                if (i+top.x == 0 or i+top.x == n-1
                        or j+top.y == 0 or j+top.y == n-1) ++chips_fora;
            }
        }

    for (int i=0; i < n; ++i) {
        for (int j=0; j < n; ++j) {
            if (j != 0) cout << ' ';
            cout << mat[i][j].contingut;
        }
        cout << endl;
    }

    cout << "canvis: " << (canvis? "si" : "no") << endl
        << "chips nous fora: " << chips_fora << endl;
}
