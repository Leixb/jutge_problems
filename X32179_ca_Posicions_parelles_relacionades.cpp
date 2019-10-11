#include <bits/stdc++.h>
using namespace std;

int main () {
    int segon;
    cin >> segon >> segon;
    int cont = 1;
    for (int a, parell=0; cin >> a; parell^=1) if (parell and a == segon) ++cont;
    cout << cont << endl;
}
