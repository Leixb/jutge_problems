#include <bits/stdc++.h>
using namespace std;

bool check (const int &a, const int &b, const int &c, const int &d) {
    for (int x = a; x <= b; ++x)
        for (int y = c; y <= d; ++y) {
            double z = sqrt(x*x + y*y), _z;
            if (modf(z, &_z) == 0.0) {
                cout << x << "^2 + " << y << "^2 = " << z << "^2" << endl;
                return true;
            }
        }
    return false;
}

int main () {
    for (int a, b, c, d; cin >> a >> b >> c >> d;)
        if (!check(a, b, c, d)) cout << "Sense solucio!" << endl;
}


