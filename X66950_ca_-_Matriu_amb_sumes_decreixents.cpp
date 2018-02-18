#include <iostream>
#include <vector>
using namespace std;

typedef  vector<vector<int> > Mat;

Mat llegirMat(int n, int m) {
    Mat A(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }
    return A;
}

int suma_fila(const Mat &A, const int fila) {
    int sum = 0;
    for (size_t i = 0; i < A[fila].size(); ++i) sum += A[fila][i];
    return sum;
}

bool sumes_decreixents (const Mat & A){
    int prev = suma_fila(A, 0);
    for (size_t i = 1; i < A.size(); ++i) {
        int sum = suma_fila(A, i);
        if (sum >= prev) return false;
        prev = sum;
    }
    return true;
}

int main() {
    int n,m;
    while (cin >> n >> m) {
        Mat A = llegirMat(n,m);
        if (sumes_decreixents(A)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
