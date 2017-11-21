#include <bits/stdc++.h>
using namespace std;

int main () {
    int k, n;
    cin >> k >> n;
    int negativos = 0;
    for (int i = 5; i != 0; --i) {
        int gastos;
        cin >> gastos;
        n += k - gastos;
        if (n < 0) ++negativos;
    }
    cout << n << endl << negativos << endl;
}
