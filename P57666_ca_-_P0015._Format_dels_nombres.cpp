#include <bits/stdc++.h>
using namespace std;

int nombre_digits(int n, int b) {
    int c=0;
    if (n==0) return 1;
    while (n > 0) {
        n/=b;
        ++c;
    }
    return c;
}

void escriu_base(int n, const int& b) {
    if (n<b) {
        cout << n;
        return;
    }
    escriu_base(n/b,b);
    cout << n%b;
}

int main () {
    int n,b,c;
    while (cin >> n >> b >> c) {
        int n_d = nombre_digits(n,b);
        if (n_d > c) {
            for (int i = 0; i < c; ++i) cout << '*';
            cout << endl;
        } else {
            for (int i = 0; i < c-n_d; ++i) cout << '#';
            escriu_base(n,b);
            cout << endl;
        }
    }
}
