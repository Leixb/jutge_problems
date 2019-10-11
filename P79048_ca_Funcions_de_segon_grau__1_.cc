#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a,b,c;
    cin >> a >> b >> c;
    double p = b*b-4*a*c;
    if (p==0) cout << -b/(2*a) << endl;
    else if (p<0) cout << "sense solucio" << endl;
    else cout << (-b-sqrt(p))/(2*a) << ' ' << (-b+sqrt(p))/(2*a) << endl;
}
