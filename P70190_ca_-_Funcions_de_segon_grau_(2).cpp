#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double a,b,c;
    cin >> a >> b >> c;
    double m = -b/(2*a);
    cout << m << endl << a*m*m+b*m+c << endl;
    if (a<0) cout << "maxim" << endl;
    else cout << "minim" << endl;
}
