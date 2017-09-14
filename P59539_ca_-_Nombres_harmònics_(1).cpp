#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int n;
    cin >> n;
    double h = 0.0;
    for (double i = 1; i <= n; i++) {
        h += 1.0/i;
    }
    if (h < 0.0 ) h *= -1;
    cout << fixed << setprecision(4) << h << endl;
}
