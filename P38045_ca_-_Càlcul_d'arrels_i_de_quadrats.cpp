#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main () {
	double n;
    while (cin >> n) {
        cout << fixed << setprecision(0)<< n*n << fixed << setprecision(6)  << ' ' << sqrt(n) << endl;
    }
}
