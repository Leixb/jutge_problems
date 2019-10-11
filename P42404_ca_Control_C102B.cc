#include <bits/stdc++.h>
using namespace std;

int main () {
    double v;
    string nom;
    cin >> v >> nom;
    if (nom == "euros") cout << fixed << setprecision(2) << v*1.254 << " dolars" << endl;
    else cout << fixed << setprecision(2) << v/1.254 << " euros" << endl;
}
