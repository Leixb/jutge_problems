#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main () {
	double n;
    const double factor = atan(1)/45;
    while (cin >> n) {
        cout << fixed << setprecision(6) << sin(n*factor) << ' ' << cos(n*factor) << endl;
    }
}
