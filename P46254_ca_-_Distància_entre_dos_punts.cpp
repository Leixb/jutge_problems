#include <bits/stdc++.h>
using namespace std;

struct Punt {
    double x, y;
};

double distancia(const Punt& a, const Punt& b) {
    return sqrt(pow(a.x-b.x,2) + pow(a.y-b.y,2));
}

int main () { }
