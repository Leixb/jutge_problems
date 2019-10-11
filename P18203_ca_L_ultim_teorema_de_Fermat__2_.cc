#include <iostream>
using namespace std;

int main () {
    int a, b, c, d;
    while (cin >> a >> b >> c >> d) {
        if (a <= 0 and b >=0) {
            if (c <= 0 and d >= 0) {
                cout << "0^3 + 0^3 = 0^3" << endl;
                return 0;
            }
            cout << "0^3 + " << c << "^3 = " << c << "^3" << endl;
            return 0;
        }
        if (c <= 0 and d >= 0) {
            cout  << a << "^3 + 0^3 = " << a << "^3" << endl;
            return 0;
        }
    }
    cout << "Sense solucio!" << endl;
}
