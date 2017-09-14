#include <iostream>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(4);
    double i;
    int f=1;
    string t;
    cin >> i >> t;
    if (t=="setmanal") f = 52; 
    else if (t=="mensual") f = 12; 
    else if (t=="trimestral") f = 4; 
    else if (t=="semestral") f = 2; 
    cout << 100*(pow(1+i/(100*f),f)-1) << endl;
}
