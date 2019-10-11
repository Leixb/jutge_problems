#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int x_esq, x_dre, y_baix, y_dalt;
};

void llegeix(Rectangle& r) {
    cin >> r.x_esq >> r.x_dre >> r.y_baix >> r.y_dalt;
}

int main () {
    int n;
    while (cin >> n and n != 0) {
        Rectangle inter;
        if (n) llegeix(inter);
        while (--n) {
            Rectangle r;
            llegeix(r);
            inter.x_dre = min(inter.x_dre, r.x_dre);
            inter.x_esq = max(inter.x_esq, r.x_esq);
            inter.y_baix = max(inter.y_baix, r.y_baix);
            inter.y_dalt = min(inter.y_dalt, r.y_dalt);
        }
        if (inter.y_baix >= inter.y_dalt or inter.x_dre <= inter.x_esq)
            cout << "interseccio buida" << endl;
        else cout << "punt inferior esquerre = (" << inter.x_esq  << ", " << inter.y_baix
            << "); punt superior dret = (" << inter.x_dre << ", " << inter.y_dalt << ')' << endl;
    }
}
