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
// of columns, then each successive row is printed 
// in a different line, with each element of the row 
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

// Returns the product of two matrices of correct 
// dimensions
Matrix matrix_product(const Matrix& A, const Matrix& B) {
    int n = A.size(); int p = A[0].size();
    int m = B[0].size();
    Matrix C(n, Row(m,0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            for (int k = 0; k < p; ++k)
                C[i][j] += A[i][k]*B[k][j];
    return C;
}

// returns the transpose of the given non-empty matrix
Matrix transpose(const Matrix& M) {
    Matrix T (M[0].size(), Row (M.size()));

    for (size_t i=0; i < M.size(); ++i)
        for (size_t j=0; j < M[i].size(); ++j)
            T[j][i] = M[i][j];

    return T;
}

// returns true iff the given non-empty matrix A is an 
// identity matrix
bool is_identity(const Matrix& A) {
    if (A.size() != A[0].size()) return false;
    for (size_t i=0; i < A.size(); ++i) {
        for (size_t j=0; j < A[i].size(); ++j) {
            if (i == j) {
                if (A[i][j] != 1) return false;
            } else {
                if (A[i][j]) return false;
            }
        }
    }
    return true;
}



bool orthonormal_matrix(const Matrix& M) {
    if (M.size() != M[0].size()) return false;

    const Matrix T = transpose(M);

    return is_identity( matrix_product(M, T))
           and is_identity( matrix_product(T, M));
}

int main () {
    bool first = true;
    for (int n, m; cin >> n >> m;) {
        const Matrix M = read_matrix(n, m);

        if (!first) cout << ' ';
        else first = false;
        cout << (orthonormal_matrix(M)? "yes" : "no");
    }
    cout << endl;
}
