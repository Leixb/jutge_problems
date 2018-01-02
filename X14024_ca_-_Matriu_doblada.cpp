#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;

// input : Matrix NxM, N>=0, M>=0
// result: boolean, true iff the matrix is doubling
bool doublingmatrix(const Matrix& M) {

    if (M.size() == 0 or M[0].size() == 0) return true;

    for (size_t i = 0; i < M[0].size(); ++i) {
        int mul = M[0][i]*2;
        for (size_t j = 1; j < M.size(); ++j, mul*=2)
            if (M[j][i] != mul) return false;
    }

    for (size_t i = 0; i < M.size(); ++i) {
        int mul = M[i][0]*2;
        for (size_t j = 1; j < M[0].size(); ++j, mul*=2)
            if (M[i][j] != mul) return false;
    }

    return true;
}

template<typename T>
istream& operator>> (istream& in, vector<T>& v) {
    for (auto& elem : v) cin >> elem;
    return in;
}

int main () {
    for (int nfiles, ncolumnes; cin >> nfiles >> ncolumnes;) {
        Matrix M (nfiles, vector<int> (ncolumnes));
        cin >> M;
        cout << (doublingmatrix(M)? "yes" : "no") << endl;
    }
}
