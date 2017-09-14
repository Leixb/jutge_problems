#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a,b,c;
    cin >> a >> b >> c;
    if (b==0) { cout << "impossible" << endl; return 0; }
    cout << -a/b << endl << -c/b << endl;
}
