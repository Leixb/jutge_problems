#include <bits/stdc++.h>
using namespace std;

struct Rellotge {
    int h;      // hores (0<=h<24)
    int m;      // minuts (0<=m<60)
    int s;      // segons (0<=s<60)
    Rellotge (int h=0, int m =0, int s=0): h(h), m(m), s(s) {}
};

Rellotge mitja_nit() {
    return Rellotge();
}
void incrementa(Rellotge& r) {
    if (++r.s == 60)
        if (++r.m == 60)
            if (++r.h == 24) r.h = r.m = r.s = 0;
    r.s%=60, r.m%=60, r.h%=24;
}
void escriu(const Rellotge& r) {
    printf("%02d:%02d:%02d\n", r.h, r.m, r.s);
}

int main () { }
