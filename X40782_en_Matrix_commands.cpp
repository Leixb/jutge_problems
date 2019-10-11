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

// Returns the sum of two matrices of correct dimensions
Matrix matrix_sum(const Matrix& A, const Matrix& B) {
    int n = A.size(); int m = A[0].size();
    Matrix C(n, Row(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            C[i][j] = A[i][j] + B[i][j];
    return C;
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

// The main program reads commands from the input and 
// writes the appropriate answers in the output; the
// commands are either
// "+ <n> <m> <elements of A> <n'> <m'> <elements of B>", 
// which writes the sum of the two matrices if the 
// dimensions of the matrices are correct, and an error 
// message otherwise; or
// "* <n> <m> <elements of A> <n'> <m'> <elements of B>", 
// which writes the product of the two matrices if the 
// dimensions of matrices are correct, and an error 
// message otherwise.
int main() {
    char s;
    while (cin >> s) {
        int n, m;
        cin >> n >> m;
        Matrix A = read_matrix(n, m);

        int nb, mb;
        cin >> nb >> mb;
        Matrix B = read_matrix(nb, mb);

        if (s == '+') {
            if (n != nb or m != mb) cout << "The two matrices cannot be added." << endl << endl;
            else print_matrix(matrix_sum(A, B));
        } else if (s == '*') {
            if (m != nb) cout << "The two matrices cannot be multiplied." << endl << endl;
            else print_matrix(matrix_product(A, B));
        }
    }
}
