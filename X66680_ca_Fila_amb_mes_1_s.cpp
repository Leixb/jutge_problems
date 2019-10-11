#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;

// input : a matrix NxM, N>0, M>0, containing sorted rows of only 0's and 1's.
// output: index (between 0 and N-1) of the first row with maximum number of 1's)
int find_row_most_ones(const Matrix& M) {
    for (size_t col = 0; col < M[0].size(); ++col)
        for (size_t i = 0; i < M.size(); ++i) if (M[i][col]) return i;
    return 0;
}

int main () {
    for (int n, m; cin >> n >> m;) {
        Matrix M (n, vector<int> (m));
        for (int i=0; i < n; ++i)
            for (int j=0; j < m; ++j) cin >> M[i][j];
        cout << "Row: " << find_row_most_ones(M) << endl;
    }
}
