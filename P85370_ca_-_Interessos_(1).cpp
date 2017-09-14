#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double c,i,t;
    string tipus;
    cin >> c >> i >> t >> tipus;
    if (tipus=="compost") cout << c*pow(1+i/100,t) << endl;
    else cout << c+c*t*(i/100) << endl;
}
