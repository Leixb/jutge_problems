#include <bits/stdc++.h>
using namespace std;

int main () {
    int minim, dist;
    cin >> minim;
    for (int n, d=0; cin >> n; ++d)
        if (n == minim) dist = d;
        else if (n < minim) minim = n, d = -1;
    cout << "el minim es " << minim << endl
         << "la distancia es " << dist << endl;
}
