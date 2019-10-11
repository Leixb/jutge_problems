#include <bits/stdc++.h>
using namespace std;

struct Paraula {
    string contingut; // la paraula
    int consonants; // nombre d’aparicions de consonants
};
typedef vector< vector<Paraula> > MatParaules;

int n, m, k;

bool recorre_escala(const MatParaules& paraules, int x, int y) {
    int prev = paraules[x][y].consonants;
    for (int d = 1; d < k; ++d) {
        if (x+d >= n or y+d >= m) return false;
        if (paraules[x+d][y+d].consonants <= prev) return false;
        prev = paraules[x+d][y+d].consonants;
    }
    return true;
}

pair<int, int> recorre_escales(const MatParaules& paraules) {
    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j)
            if (recorre_escala(paraules, i, j)) return {i, j};
    return {-1, -1};
}

int main () {
    cin >> n >> m >> k;
    MatParaules paraules (n, vector<Paraula> (m));

    for (int i=0; i < n; ++i) {
        for (int j=0; j < m; ++j) {
            cin >> paraules[i][j].contingut;
            paraules[i][j].consonants = 0;
            for (const auto& lletra : paraules[i][j].contingut)
                paraules[i][j].consonants += lletra != 'A' and lletra != 'E'
                    and lletra != 'I' and lletra != 'O' and lletra != 'U';
        }
    }

    const auto pos = recorre_escales(paraules);

    cout << pos.first << ' ' << pos.second;
    if (pos.first != -1) cout << ' ' << paraules[pos.first][pos.second].contingut << endl;
    else cout << endl;
}
