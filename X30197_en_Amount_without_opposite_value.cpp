#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    map <int, bool> M;
    int cont = 0;
    bool has_zero = false;
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        if (m > 0) cont += M[m];
        else if (m) M[-m] = true;
        else has_zero = true;
    }
    cout << n - 2*cont - has_zero << endl;
}
