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

int main() {
    int n,m;
    while (cin >> n >> m) {
        Matrix A = read_matrix(n, m);
        if (is_identity(A))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
