#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	double n, mean = 0.0, total = 0.0;
    while (cin >> n) {
        total += n;
        mean++;
    }
    mean = total/mean;
    cout << fixed << setprecision(2) << mean << endl;
}
