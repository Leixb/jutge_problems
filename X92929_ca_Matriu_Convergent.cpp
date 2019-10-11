#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<int> > Matrix;

// Pre: M is a square matrix
// Post: Returns true if the given matrix is converging, false if it is not.
//       If the matrix is converging, the convergence value is stored in x.
bool converging(const Matrix &M, int &x) {
    const int s = M.size();
    int prev;
    for (int i = 0; i <= (s-1)/2; ++i) {
        const int &a = M[i][i],
                  &b = M[i][s-1-i],
                  &c = M[s-1-i][i],
                  &d = M[s-1-i][s-1-i];
        if (a != b or b != c or c != d) return false;
        if (prev >= a and i) return false;
        prev = a;
    }
    x = M[s/2][s/2];
    return true;
}

int main () {
    for (int n; cin >> n;) {
        Matrix M (n, vector<int> (n));
        for (int i=0; i < n; ++i)
            for (int j=0; j < n; ++j) cin >> M[i][j];
        int x;
        if (converging(M, x)) cout << "yes " << x << endl;
        else cout << "no" << endl;
    }
}
