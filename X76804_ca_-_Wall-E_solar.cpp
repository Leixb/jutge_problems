#include <bits/stdc++.h>
using namespace std;

struct Info {
    char contingut;             // Mur (’X’), buit (’.’) o deixalles (dígit)
    int  energia;               // Aportacio d’energia solar de la casella
};

typedef  vector< vector<Info> >  Camp;

int main () {
    int f, c;
    cin >> f >> c;

    Camp v (f, vector<Info> (c));
    for (int i=0; i < f; ++i)
        for (int j=0; j < c; ++j) cin >> v[i][j].contingut;
    for (int i=0; i < f; ++i)
        for (int j=0; j < c; ++j) {
            char ener;
            cin >> ener;
            v[i][j].energia = ener - '0';
        }

    int x, y, energia;
    string direccions;
    cin >> x >> y >> energia >> direccions;

    int escombraries = 0;
    for (const auto& dir : direccions) {
        if (energia <= 0) break;
        int dx=0, dy=0;
        if (dir == 'N') dx = -1;
        else if (dir == 'S') dx = +1;
        else if (dir == 'E') dy = +1;
        else dy = -1;
        while (energia > 0 and v[x+dx][y+dy].contingut != 'X') {
            x += dx, y += dy;
            if (v[x][y].contingut != '.') {
                escombraries += v[x][y].contingut - '0';
                v[x][y].contingut = '.';
                --energia;
            }
            energia += v[x][y].energia;
            v[x][y].energia = 0;
        }
    }

    cout << "escombraries: " << escombraries << endl
         << "energia: " << energia << endl
         << "posicio: (" << x << ',' << y << ')' << endl;
}
