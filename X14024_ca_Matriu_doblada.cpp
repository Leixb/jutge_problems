#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;

// input : Matrix NxM, N>=0, M>=0
// result: boolean, true iff the matrix is doubling
bool doublingmatrix(const Matrix& M) {

    for (size_t i = 0; i < M.size(); ++i)
        for (size_t j = 0; j < M[0].size(); ++j) {
            if (i and M[i][j] != 2*M[i-1][j]) return false;
            if (j and M[i][j] != 2*M[i][j-1]) return false;
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
