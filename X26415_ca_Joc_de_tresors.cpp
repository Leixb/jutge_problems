#include <bits/stdc++.h>
using namespace std;

template <typename T> inline istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

struct Jugador {
    int f, c;
    int tresor, delay;
    int caselles;
    int n, m;
    bool inv, swap;

    Jugador(int f, int c, int n, int m, bool inv = false): f(f), c(c), n(n), m(m), inv(inv) {
        delay = swap = tresor = caselles = 0;
    }

    void avanca() {
        if (inv) {
            if (swap) ++c;
            else --c;

            if (c < 0) c = 0, --f, swap^=1;
            else if (c >= m) c = m-1, --f, swap^=1;
        } else {
            if (f%2) --c;
            else ++c;

            if (c < 0) c = 0, ++f;
            else if (c >= m) c = m-1, ++f;
        }
    }
};

int main () {
    int k;
    cin >> k;
    while (k--) {
        int n, m;
        cin >> n >> m;
        vector <vector<int> > tauler (n, vector<int> (m));
        cin >> tauler;

        Jugador a(0, 0, n, m), b(n-1, m-1, n, m, true);

        bool f = true;
        int torn;
        for (;;) {
            cerr << endl << a.f << ' ' << a.c << endl;
            cerr << b.f << ' ' << b.c << endl;
            if (not a.delay) {
                torn = 1;
                if (!f) a.avanca();
                if (a.f == b.f and a.c == b.c) break;
                ++a.caselles;
                if (tauler[a.f][a.c] < 0) a.delay = tauler[a.f][a.c];
                else a.tresor += tauler[a.f][a.c];
            } else ++a.delay;

            if (not b.delay) {
                torn = 2;
                if (!f) b.avanca();
                if (a.f == b.f and a.c == b.c) break;
                ++b.caselles;
                if (tauler[b.f][b.c] < 0) b.delay = tauler[b.f][b.c];
                else b.tresor += tauler[b.f][b.c];
            } else ++b.delay;
            f = false;
        }

        int guanyador;
        if (a.tresor > b.tresor) guanyador = 1;
        else if (b.tresor > a.tresor) guanyador = 2;
        else {
            if (a.caselles > b.caselles) guanyador = 1;
            else if (b.caselles > a.caselles) guanyador = 2;
            else guanyador = torn;
        }

        if (guanyador == 1) cout << "1: " << a.tresor << ' ' << a.caselles << endl;
        else cout << "2: " << b.tresor << ' ' << b.caselles << endl;

    }
}
