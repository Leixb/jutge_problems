#include <bits/stdc++.h>
using namespace std;

int main () {
    int a[3][3];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) cin >> a[i][j];

    int d1=0, d2=0;
    for (int i = 0; i < 3; ++i) {
        int m1=1, m2=1;
        for (int j = 0; j < 3; ++j) 
            m1 *= a[(1+j)%3][(i+j)%3],
            m2 *= a[(1+j)%3][(3+i-j)%3];
        d1 += m1, d2 += m2;
    }

    if (d1 == d2) cout << "No es invertible." << endl;
    else cout << "Es invertible." << endl;
}
