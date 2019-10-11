#include <bits/stdc++.h>
using namespace std;

int main () {
    for (int k; cin >> k;) {
        bool ok = true;
        for (int beneficios; k-- and cin >> beneficios; ok &= beneficios > 0);
        cout << (ok? "PREMIO" : "NO") << endl;
    }
}
