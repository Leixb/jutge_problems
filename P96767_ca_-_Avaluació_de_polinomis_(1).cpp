#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
using namespace std;

int main () {
	int cont = 0;
    double x, n, res = 0;
    cin >> x;
    while (cin >> n) {
        res += n*pow(x,cont);
        cont++;
    }
    cout << fixed << setprecision(4) << res << endl;
}
