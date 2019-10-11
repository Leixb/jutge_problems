#include <iostream>
using namespace std;

int digit_competition(int d, int x, int y) {
    int cx=0, cy=0;

    for (;x > 0; x/=10) cx += (d == x%10);
    for (;y > 0; y/=10) cy += (d == y%10);

    return (cx > cy) - (cy > cx);
}


int main() {
    for (int d, x, y; cin >> d >> x >> y;) cout << digit_competition(d, x, y) << endl;
}
