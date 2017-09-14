#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    cout.setf(ios::fixed); cout.precision(4);
    int t;
    double p;
    cin >> t >> p;
    int fac[] = {1,1,2,6,24,120,720,5040,40320,362880};
    for (int c = 0;  c <= t; c++) {
        int x = 35*fac[t]/fac[c]/fac[t-c]*pow(p,c)*pow(1-p,t-c);
        cout << c << ' ';
        while (x--) cout << 'X';
        cout << endl;
    }
}
