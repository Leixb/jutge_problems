#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main () {
	double x, y, r, pi = atan(1)*4;
    string des;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> des;
        if (des == "rectangle") {
            cin >> x >> y;
            cout << fixed << setprecision(6) << x*y << endl;
        } else {
            cin >> r;
            cout << fixed << setprecision(6) << r*r*pi << endl;
        }
    }
}
