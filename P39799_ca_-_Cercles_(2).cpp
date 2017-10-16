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

void llegeix(Punt& p) {
    cin >> p.x >> p.y;
}

void llegeix(Cercle& c) {
    cin >> c.centre.x >> c.centre.y >> c.radi;
}

int main () {
    Punt p, desp;
    Cercle c;

    llegeix(c);
    llegeix(p);

    bool dins_prev = es_interior(p,c);
    cout << ((dins_prev)? "inicialment a dins" : "inicialment a fora") << endl;

    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {

        llegeix(desp);
        desplaca(p,desp);

        bool dins = es_interior(p,c);
        if (dins_prev != dins) {
            cout << "al pas " << i << " ha " 
                 << ((dins)? "entrat a dins": "sortit a fora") << endl;
            dins_prev = dins;
        }
    }
}
