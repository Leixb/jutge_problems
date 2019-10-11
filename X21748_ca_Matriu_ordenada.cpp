#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;

// input : Matrix NxM, N>=0, M>=0
// result: boolean, true iff the matrix is sorted
bool sortedmatrix(const Matrix& M) {
    if (M.size() == 0 or M[0].size()==0) return true;

    for (size_t i=0; i < M.size(); ++i)
        for (size_t j=0; j < M[0].size(); ++j)
            if (i and M[i][j] < M[i-1][j]) return false;
            else if (j and M[i][j] < M[i][j-1]) return false;

    return true;
}

bool readMatrix(Matrix& M) {
    int n, m;
    if(!(cin >> n >> m)) return false;

    M = Matrix (n, vector<int> (m));

    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j)
            cin >> M[i][j];

    return true;
}

int main () {
    for (Matrix M; readMatrix(M);) cout << (sortedmatrix(M)? "yes" : "no") << endl;
}
