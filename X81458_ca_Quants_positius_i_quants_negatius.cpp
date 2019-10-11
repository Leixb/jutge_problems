#include <bits/stdc++.h>
using namespace std;

int main () {
    int pos=0, neg=0, tot=0;
    for (int n; cin >> n;) ++tot, pos += (n > 0), neg += (n < 0);
    cout << "Pos: " << pos << endl << "Neg: " << neg << endl << "Tot: " << tot << endl;
}
