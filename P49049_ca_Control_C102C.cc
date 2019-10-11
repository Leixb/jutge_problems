#include <bits/stdc++.h>
using namespace std;

int main () {
    double v;
    string nom;
    cin >> v >> nom;
    if (nom == "milles") cout << fixed << setprecision(2) << v*1.6093 << " quilometres" << endl;
    else cout << fixed << setprecision(2) << v/1.6093 << " milles" << endl;
}
