#include <iostream>
#include <math.h>
using namespace std;

int suma_digits(int x) {
    if (x <= 9) return x;
    return x%10 + suma_digits(x/10);
}

bool es_primer_perfecte(int n) {
     if (n<=1) return false;
     for (int i = 2; i <= sqrt(n); i++) if (n%i == 0) return false;
     if (n <= 9) return true;
     return es_primer_perfecte(suma_digits(n));
}

int main () {
	int n;
    while (cin >> n) {
        if (es_primer_perfecte(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}
