#include <bits/stdc++.h>
using namespace std;

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b) {
    return sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
}

void desplaca(Punt& p1, const Punt& p2) {
    p1.x+=p2.x, p1.y+=p2.y;
}

struct Cercle {
    Punt centre;
    double radi;
};

bool es_interior(const Punt& p, const Cercle& c) {
    return distancia(p,c.centre) < c.radi;
}

void escala(Cercle& c, double esc) {
    c.radi*=esc;
}

void desplaca(Cercle& c, const Punt& p) {
    desplaca(c.centre,p);
}

int main () { }
