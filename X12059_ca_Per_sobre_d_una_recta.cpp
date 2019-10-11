#include <iostream>
#include <vector>
using namespace std;

struct point2d {
    int x, y;
};

// retorna quants punts donats en el vector v queden per
// sobre de la recta y = ax + b
int above_line(const vector<point2d>& v, int a, int b) {
    int cont = 0;
    for (const auto& p : v) cont += p.y > p.x*a + b;
    return cont;
}

// llegeix n punts des del cin (n parells xi, yi) i els 
// retorna en un vector<point2d>
vector<point2d> read_points(int n) {
    vector <point2d> v(n);
    for (point2d& p : v) cin >> p.x >> p.y;
    return v;
}


int main() {
    int n;
    while (cin >> n) {
        vector<point2d> v = read_points(n);
        int a, b;
        cin >> a >> b;
        cout << above_line(v, a, b); 
        cout << " points lie above ";
        cout << "the line  y = " << a << "x" ;
        if (b>0) cout << " + " << b << endl;
        else if (b<0) cout << " - " << -b << endl;
        else cout << endl;
    }
}
