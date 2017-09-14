#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed); cout.precision(4);
    int t,c;
    double p;
    cin >> t >> c >> p;
    int fac[] = {1,1,2,6,24,120,720,5040,40320,362880};
    cout << fac[t]/fac[c]/fac[t-c]*pow(p,c)*pow(1-p,t-c) << endl;
}
