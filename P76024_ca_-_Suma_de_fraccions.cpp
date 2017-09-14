#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int a,b,k;
    while (cin >> a) {
        cin >> b >> k;
        double r = 0;
        for (int i = a; i <= b; i += k) r += 1.0/i;
        cout << fixed << setprecision(4) << r << endl;
    }
}
