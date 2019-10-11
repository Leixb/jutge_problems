#include <iostream>
#include <vector>
using namespace std;

#define matrix vector <vector <long> >

int m;

matrix mult (matrix A, matrix B) {
    matrix R = {{0,0},{0,0}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++)
                R[i][j]+=A[i][k]*B[k][j];
            R[i][j]%=m;
        }
    return R;
}

matrix power(matrix M, long p) {
    matrix R = {{1,0},{0,1}};
    while (p!=0) {
        if (p%2) {
            R = mult(R,M);
            p--;
        }
        M = mult(M,M);
        p/=2;
    }
    return R;
}

int main () {
    matrix M = {{0,0},{0,0}};
    long n;
    while (cin >> M[0][0] >> M[0][1] >> M[1][0] >> M[1][1] >> n >> m) {
        M = power(M,n);
        cout << M[0][0]<< ' ' << M[0][1] << endl << M[1][0] << ' ' << M[1][1] << endl << "----------" << endl;
    }
}
