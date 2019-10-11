#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
using namespace std;

int main () {
    double x, n, res = 0;
    cin >> x;
    vector <double> v;
    while (cin >> n) v.push_back(n);
    for (int i = 0; i < v.size(); i++) res += v[i]*pow(x,v.size()-1-i);
    cout << fixed << setprecision(4) << res << endl;
}
