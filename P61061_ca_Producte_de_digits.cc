#include <iostream>
using namespace std;

int main () {
	long long n;
    bool primer = true;
    while (cin >> n) {
        long long res = 1, m = n;
        if (n < 10) cout << "El producte dels digits de " << n << " es " << n << '.' << endl;
        while (m >= 10) {
            res = 1;
            while (m >= 1) {
                res *= m%10;
                m/=10;
            }
            cout << "El producte dels digits de " << n << " es " << res << '.' << endl;
            n = res;
            m = n;
        }
        cout << "----------" << endl;
    }
}
