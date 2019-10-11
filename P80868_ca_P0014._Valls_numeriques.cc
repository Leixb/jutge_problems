#include <bits/stdc++.h>
using namespace std;

int nombre_digits(int n) {
    if (n < 10) return 1;
    else return 1 + nombre_digits(n/10);
}

int main () {
    int n, f;
    cin >> n >> f;
    int sz = nombre_digits(n);

    for (int i = 0; i < f; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j!=0) cout << '-';
            cout << n;
        }
        cout << '.';
        for (int j = 0; j < 2*(f-i-1); ++j)
            for (int k = 0; k < sz+1; ++k) cout << '.';
        for (int j = 0; j <= i; ++j) {
            if (j!=0) cout << '-';
            cout << n;
        }
        cout << endl;
    }
}
