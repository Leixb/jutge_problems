#include <bits/stdc++.h>
using namespace std;

struct Info {
    int min, max;
};

typedef vector<vector<int> > Matriu;

vector<Info> info_capes(const Matriu& mat) {

    int f = mat.size(), c = mat[0].size();

    int mida = min(f, c);
    if (mida%2) mida = mida/2 + 1;
    else mida /= 2;
    vector<Info> res (mida);

    for (int capa = 0; capa < mida; ++capa) {
        res[capa] = {mat[capa][capa], mat[capa][capa]};
        for (int i = capa; i < f-capa; ++i) {
            res[capa].max = max(res[capa].max, max(mat[i][c-1-capa], mat[i][capa]));
            res[capa].min = min(res[capa].min, min(mat[i][c-1-capa], mat[i][capa]));
        }
        for (int i = capa; i < c-capa; ++i) {
            res[capa].max = max(res[capa].max, max(mat[f-1-capa][i], mat[capa][i]));
            res[capa].min = min(res[capa].min, min(mat[f-1-capa][i], mat[capa][i]));
        }
    }
    return res;
}

template <typename T>
istream& operator>>(istream& is, vector<T>& v) {
    for (auto& i : v) is >> i;
    return is;
}

int main () {
    for (int n, m, c=1; cin >> n >> m; ++c) {
        Matriu mat(n, vector<int> (m));
        cin >> mat;

        cout << "matriu " << c << ':';
        for (const auto& i : info_capes(mat)) cout << ' ' << i.min << ',' << i.max;
        cout << endl;
    }
}
