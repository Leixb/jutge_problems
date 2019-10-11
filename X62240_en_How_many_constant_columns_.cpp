#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// reads an n x m integer matrix from the input, n >= 1, m >= 1
Matrix read_matrix(int n, int m) {
    Matrix M(n, Row(m));
    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j)
            cin >> M[i][j];
    return M;
}

// Add other functions here if you need them.
bool is_constant_column(const Matrix& M, int col) {
    for (size_t i = 1; i < M.size(); ++i)
        if (M[i][col] != M[i-1][col]) return false;
    return true;
}

int how_many_constant_columns(const Matrix& M) {
    int count = 0;
    for (size_t i = 0; i < M[0].size(); ++i) count += is_constant_column(M, i);
    return count;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix M = read_matrix(n, m);
        cout << how_many_constant_columns(M) << endl;
    }
}

