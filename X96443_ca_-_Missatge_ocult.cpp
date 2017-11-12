#include <bits/stdc++.h>
using namespace std;

struct Coord {
    int x, y;
    Coord(int x, int y): x(x), y(y) {}
};

Coord seguentD (const Coord& p, int n) {
    if (p.x == 0 and p.y == n-1) return Coord(n-1, 1);
    if (p.x == 0) return Coord(p.y+1, 0);
    if (p.y == n-1 and p.x == n-1) return Coord(0, 0);
    if (p.y == n-1) return Coord(n-1, p.x+1);
    return Coord(p.x-1, p.y+1);
}

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

int main () {
    int n, d, l, f, c;
    while (cin >> n >>  d >>  l >>  f >>  c) {
        vector <vector <char> > v (n, vector<char>(n));
        cin >> v;
        Coord p = Coord(f, c);
        bool X = false;
        while (l--) {
            char lletra = v[p.x][p.y];
            if (lletra == 'X') {
                if (X) cout << ' ';
                X ^= true;
            } else {
                if (X) {
                    cout << 'X';
                    X = false;
                }
                cout << lletra;
            }
            for (int i = 0; i <= d; ++i) p = seguentD(p, n);
        }
        if (X) cout << 'X';
        cout << endl;
    }
}
