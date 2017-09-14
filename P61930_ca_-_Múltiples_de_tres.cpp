#include <iostream>
using namespace std;

int suma_digits(int x) {
    if (x <= 9) return x;
    return x%10 + suma_digits(x/10);
}

bool es_multiple_3(int n) {
    int x = suma_digits(n);
    if (x <= 9) return (x == 3 or x == 6 or x == 9);
    return es_multiple_3(x);
}

int main () {
	int n;
    while (cin >> n) {
        if (es_multiple_3(n)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}
