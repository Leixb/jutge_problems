#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matriu;

struct Info {
    int suma, maxim;
};

bool es_pentadiagonal(const Matriu& mat) {
    for (size_t i = 0; i < mat.size(); ++i)
        for (size_t j = i+3; j < mat[0].size(); ++j)
            if (mat[i][j] or mat[j][i]) return false;
    return true;
}

void calcula(const Matriu& mat, Info& inf) {
    inf = {mat[0][0] + mat[1][0] + mat[0][1] + mat[1][1], max(max(mat[0][0], mat[1][1]), max(mat[1][0], mat[0][1]))};
    inf.maxim = max(inf.maxim, 0);
    const int mida = mat.size();
    for (int i = 2; i < mida; ++i) {
        inf.suma += mat[i][i] + mat[i-1][i] + mat[i-2][i] + mat[i][i-1] + mat[i][i-2];
        inf.maxim = max(max(inf.maxim, mat[i][i]), max(max(mat[i-2][i], mat[i-1][i]), max(mat[i][i-1], mat[i][i-2])));
    }
}

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

int main () {
    for (int n; cin >> n;) {
        vector <vector <int> > mat (n, vector <int> (n, 0));
        cin >> mat;
        if (es_pentadiagonal(mat)) {
            Info inf;
            calcula(mat, inf);
            cout << inf.suma << ' ' << inf.maxim << endl;
        } else cout << "no es pentadiagonal" << endl;
    }
}
