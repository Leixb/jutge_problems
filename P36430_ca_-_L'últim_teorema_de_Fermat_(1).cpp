#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main () {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for (int x = a; x <= b; x++) {
        for (int y = c; y <= d; y++) {
            double zz = x*x+y*y;
            int sq = sqrt(zz);
            if (sq*sq==zz) {
                cout << x << "^2 + " << y << "^2 = " << sq << "^2" << endl;
                return 0;
            }

        }
    }
    cout << "Sense solucio!" << endl;

}
