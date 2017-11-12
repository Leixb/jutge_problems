#include <bits/stdc++.h>
using namespace std;

struct Punt {
    double x, y;
};

struct Cercle {
    Punt centre;
    double radi;
};

double distancia(const Punt& a, const Punt& b) {
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

void desplaca(Punt& p1, const Punt& p2) {
    p1.x+=p2.x, p1.y+=p2.y;
}

void desplaca(Cercle& c, const Punt& p) {
    desplaca(c.centre,p);
}

bool es_interior(const Punt& p, const Cercle& c) {
    return distancia(p,c.centre) < c.radi;
}

void escala(Cercle& c, double esc) {
    c.radi*=esc;
}

void llegeix(Punt& p) {
    cin >> p.x >> p.y;
}

void llegeix(Cercle& c) {
    cin >> c.centre.x >> c.centre.y >> c.radi;
}

int relacio(const Cercle& c1, const Cercle& c2) {
    double dist = distancia(c1.centre, c2.centre);
    if (dist + c1.radi < c2.radi) return 1;
    if (dist + c2.radi < c1.radi) return 2;
    if (dist > c1.radi + c2.radi) return 0;
    return 3;
}

void cout_relacio(const int& rel) {
    if ( rel == 2 ) cout << "el segon cercle es interior al primer" << endl;
    else if ( rel == 1 ) cout << "el primer cercle es interior al segon" << endl;
    else if ( rel == 3 ) cout << "els cercles intersecten" << endl;
    else if ( rel == 0 ) cout << "els cercles no intersecten" << endl;
}

int main () {
    vector <Cercle> v (3);
    llegeix(v[1]);
    llegeix(v[2]);
    cout_relacio(relacio(v[1], v[2]));

    int cercle;
    string accio;
    while (cin >> cercle >> accio) {
        if (accio == "escala") {
            double factor;
            cin >> factor;
            escala(v[cercle], factor);
        } else {
            Punt desp;
            llegeix(desp);
            desplaca(v[cercle].centre,desp);
        }
        cout_relacio(relacio(v[1], v[2]));
    }
}
