#include <iostream>
using namespace std;

int suma_digits(int x) {
    if (x <= 9) return x;
    return x%10 + suma_digits(x/10);
}

int reduccio_digits(int x) {
    int n = suma_digits(x);
    if (n <= 9) return n;
    return reduccio_digits(n);
}


int main () {
	int x;
    while (cin >> x) cout << reduccio_digits(x) << endl;
}
