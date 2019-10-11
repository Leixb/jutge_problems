#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// Reads a matrix  with n rows and m columns 
// from the input and returns it. Assumes 
// that the input format is 
// a00 ... a0(m-1) a10 ... a1(m-1) ... a(n-1)0 ... a(n-1)(m-1)
Matrix read_matrix(int n, int m) {
    Matrix M(n, Row(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> M[i][j];   
    return M;
}

// prints the given non-empty matrix into the cout; the first line 
// gives the number of rows followed by the number 
// of columns, then each successive row is printed in 
// a different line, with each element of the row 
// separated from the next by a blank space,
// and an end-of-line is printed at the end, after the 
// last row of the matrix
void print_matrix(const Matrix& M) {
    const int n = M.size(), m = M[0].size();
    cout << n << ' ' << m << endl;
    for (int i=0; i < n; ++i) {
        for (int j=0; j < m; ++j) {
            if (j) cout << ' ';
            cout << M[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

// returns the transpose of the given non-empty matrix
Matrix transpose(const Matrix& M) {
    Matrix T (M[0].size(), Row (M.size()));

    for (size_t i=0; i < M.size(); ++i)
        for (size_t j=0; j < M[i].size(); ++j)
            T[j][i] = M[i][j];

    return T;
}

int main() {
    int n,m;
    while (cin >> n >> m) 
        print_matrix(transpose(read_matrix(n, m)));
}
