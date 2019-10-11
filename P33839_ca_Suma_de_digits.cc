#include <iostream>
using namespace std;

int main () {
	long long n,m;
    while (cin >> n) {
        int res = 0;
        m=n;
        while (n >= 1) {
            res += n%10;
            n/=10;
        }
        cout << "La suma dels digits de " << m << " es " << res << '.' << endl;
    }
}
