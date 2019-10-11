#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// reads an n x m integer matrix from the input, n >= 0, m >= 0
Matrix read_matrix(int n, int m) {
    Matrix M(n, Row(m));
    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j)
            cin >> M[i][j];
    return M;
}

void is_submatrix(const Matrix& A, const Matrix& B,
        int ia, int ja,
        int& ib, int& jb, bool& occurs)
{
    occurs = true;
    for (ib = 0; ib < (int)B.size(); ++ib) {
        jb=0;
        if (ia + ib >= (int)A.size()) {
            occurs = false;
            return;
        }
        for (; jb < (int)B[0].size(); ++jb)
            if (ja + jb >= (int)A[0].size() or A[ia + ib][ja + jb] != B[ib][jb]) {
                occurs=false;
                return;
            }
    }
}

int main() {
    int na, ma;
    cin >> na >> ma;
    Matrix A = read_matrix(na, ma);
    int nb, mb;
    cin >> nb >> mb;
    Matrix B =  read_matrix(nb, mb);
    int ia, ja;
    while (cin >> ia >> ja) {
        int ib, jb;
        bool occurs;
        is_submatrix(A, B, ia, ja, ib, jb, occurs);
        if (occurs) cout << "yes" << endl;
        else cout << "no " << ib << " " << jb << endl;
    }
}
