#include <bits/stdc++.h>
using namespace std;

struct Coord {
    int f, c;
};

Coord nextR(const Coord& p, bool& up, int n, int m) {
    if (p.c == m) return p;
    Coord next = {p.f, p.c + 1};
    if (up and --next.f < 0) {
        up = false;
        next.f+=2;
    } else if (!up and ++next.f >= n) {
        up = true;
        next.f-=2;
    };

    return next;
}

int main () {
    int n;
    string s;
    bool first = true;
    while (cin >> n >> s) {
        if (!first) cout << endl;
        first = false;

        string paraules = "";
        int m = s.size();
        for (size_t i = 0; i < s.size(); ++i) if (s[i] == '$') --m;

        vector<string> v (n, string(m, '.'));

        Coord pos = {0, 0};

        bool up = false;

        for (const auto& lletra : s) {
            if (lletra != '$') {
                v[pos.f][pos.c] = lletra;
                pos = nextR(pos, up, n, m);
            }
        }

        int cont = 0;
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) {
                cout << v[i][j];
                if (v[i][j] != '.') {
                    paraules += v[i][j];
                    ++cont;
                    if (cont%5 == 0 and j != m-1) {
                        paraules += ' ';
                    }
                }
            }
            cout << endl;
        }
        if (paraules.back() == ' ') paraules.erase(paraules.end()-1);

        cout << endl << paraules << endl;
    }
}
