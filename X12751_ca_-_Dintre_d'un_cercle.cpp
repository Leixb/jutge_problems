#include <iostream>
#include <vector>
using namespace std;

struct point2d {
    int x, y;
};

// retorna quants punts (donats en el vector v) estan 
// dintre del cercle de radi r > 0 centrat a l'origen
int inside_circle(const vector<point2d>& v, int r) {
    int count = 0;
    for (const auto &p : v) count += p.x*p.x + p.y*p.y < r*r;
    return count;
}

// llegeix n punts des del cin (n parells xi, yi) i 
// els retorna en un vector<point2d>
vector<point2d> read_points(int n) {
    vector<point2d> v(n);
    for (point2d &p : v) cin >> p.x >> p.y;
    return v;
}

int main() {
    int n;
    while (cin >> n) {
        vector<point2d> v = read_points(n);
        int r;
        cin >> r;
        cout << inside_circle(v, r);
        cout  << " points lie inside ";
        cout << "the circle  x^2 + y^2 = " << r*r << endl;
    }
}

