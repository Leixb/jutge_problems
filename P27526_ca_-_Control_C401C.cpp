#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matriu;

void intercanvia(Matriu& mat, int j, int k) {
    for (size_t i = 0; i < mat.size(); ++i) swap(mat[i][j], mat[i][k]);
}
void print(const Matriu& mat, const int& n, const int& m) {
        for (int i=0; i < n; ++i) {
            for (int j=0; j < m; ++j) {
                if (j!=0) cout << ' ';
                cout << mat[i][j];
            }
            cout << endl;
        }
}

int main () {
    int n, m;
    cin >> n >> m;
    Matriu mat (n, vector<int> (m));
    for (int i=0; i < n; ++i)
        for (int j=0; j < m; ++j) cin >> mat[i][j];

    int j, k;
    cout << "-----" << endl;
    print(mat,n,m);
    cout << "-----" << endl;
    while (cin >> j >> k) {
        intercanvia(mat,j,k);
        print(mat,n,m);
        cout << "-----" << endl;
    }
}
