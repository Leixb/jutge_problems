#include <bits/stdc++.h>
using namespace std;

void info_sequencia(int& suma, int& ultim) {
    int n;
    suma = 0;
    while (cin >> n and n != 0) {
        ultim = n;
        suma+=n;
    }
}

int main () {
    int suma,ultim, cont = 1;
    info_sequencia(suma,ultim);
    int primera_suma = suma, primera_ultim = ultim;
    while (suma!=0) {
        info_sequencia(suma,ultim);
        if (primera_suma == suma and primera_ultim == ultim) ++cont;
    }
    cout << cont << endl;
}
