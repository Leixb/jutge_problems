#include <iostream>
#include <iomanip>
using namespace std;

long long factorial (long long n) {
    if (n<=1) return 1;
    return n*factorial(n-1);
}

int main () {
    int n;
    while (cin >> n) {
        double e = 0;
        for (int i = 0; i < n; i++) e += 1.0/factorial(i);
        cout << "Amb " << n << " terme(s) s'obte " << fixed << setprecision(10) << e << '.' << endl;
    }
}
