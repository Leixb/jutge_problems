#include <bits/stdc++.h>
using namespace std;

typedef vector< vector <char> > Tauler;

struct Bola {
    int x_ant, y_ant;  // Posicio anterior de la bola
    int x_act, y_act;  // Posicio actual de la bola
    int x_seg, y_seg;  // Posicio seguent de la bola
};

struct Dir {
    int x, y;
};

void moure_fins_xocar (Tauler& t, Bola& b) {
    const int n = t.size(), m = t[0].size();
    Dir despl;
    if (b.x_act == 0 and b.y_act == 0) despl = {1, 1};
    else if (b.x_act == 0 and b.y_act == m-1) despl = {1, -1};
    else if (b.x_act == n-1 and b.y_act == 0) despl = {-1, 1};
    else if (b.x_act == n-1 and b.y_act == m-1) despl = {-1, -1};
    else despl = {
        b.x_seg - b.x_act, b.y_seg - b.y_act
    };

    for (bool ok = true; ok;) {
        b.x_seg = b.x_act + despl.x, b.y_seg = b.y_act + despl.y;
        if (b.x_seg < 0) b.x_seg += 2, ok = false;
        else if (b.x_seg >= n) b.x_seg -= 2, ok = false;
        if (b.y_seg < 0) {
            if (ok) b.y_seg += 2, ok = false;
            else b.y_seg = b.y_act, b.x_seg = b.x_act;
        } else if (b.y_seg >= m) {
            if (ok) b.y_seg -= 2, ok = false;
            else b.y_seg = b.y_act, b.x_seg = b.x_act;
        }
        if (t[b.x_act][b.y_act] == 'b') return;
        t[b.x_act][b.y_act] = (ok? '=' : 'B');
        if (ok) {
            b.x_act = b.x_seg;
            b.y_act = b.y_seg;
        }
    }
}

int main () {
    for (int n, m; cin >> n >> m;) {
        Tauler t (n, vector<char> (m, '.'));

        Bola b = {-1, -1, 0, 0, -1, -1};

        int xv, yv;
        cin >> b.x_act >> b.y_act >> xv >> yv;
        t[xv][yv] = 'b';

        bool ok = false;
        for (int i = 0; i < 4; ++i) {
            moure_fins_xocar(t, b);
            if (b.x_act == xv and b.y_act == yv) {
                ok = i==3;
                t[xv][yv] = 'B';
                break;
            }
            if (b.x_act == b.x_seg and b.y_act == b.y_seg) {
                ok = false;
                break;
            }
            cout << '(' << b.x_act << ',' << b.y_act << ')';
        }
        cout << (ok? ": si" : ": no") << endl;
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) cout << t[i][j];
            cout << endl;
        }
        cout << endl;
    }
}
