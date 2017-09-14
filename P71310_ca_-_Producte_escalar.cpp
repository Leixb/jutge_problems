#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v) {
    double r = 0.0;
    for (int i = 0; i < u.size(); i++) r += v[i]*u[i];
    return r;
}

int main () {
    
}
